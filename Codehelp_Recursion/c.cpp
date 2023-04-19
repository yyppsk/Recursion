#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

const int MAXN = 55;
const int MAXM = 105;
const int MAXCOST = 55;
const int MOD = 1e9 + 7;

long dp[MAXN][MAXM][MAXCOST];
int cum[MAXN][MAXM][MAXCOST];
int solve(int n, int m, int cost)
{
    memset(dp, 0, sizeof(dp));
    memset(cum, 0, sizeof(cum));

    for (int j = 1; j <= m; j++)
    {
        dp[1][j][0] = 1;
        cum[1][j][0] = j;
    }

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int k = 0; k <= cost; k++)
            {
                // for arrays ending in 1, 2, 3, ..., j
                dp[i][j][k] = (j * dp[i - 1][j][k]);
                dp[i][j][k] %= MOD;
                // for arrays ending in j
                dp[i][j][k] += cum[i - 1][j - 1][k - 1];
                dp[i][j][k] %= MOD;
                cum[i][j][k] = (cum[i][j - 1][k] + dp[i][j][k]) % MOD;
            }
        }
    }

    return cum[n][m][cost];
}
vector<int> arraysCount(vector<int> n, vector<int> m, vector<int> totalCost)
{
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cout << solve(n[i], m[i], totalCost[i]) << '\n';
    }
    return {};
}
int main()
{
    vector<int> a = {2, 3, 4};
    vector<int> b = {3, 3, 3};
    vector<int> c = {1, 2, 2};
    vector<int> arr = arraysCount(a, b, c);

    return 0;
}