#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int knapsack(int wt[], int val[], int W, int n, vector<vector<int>> dp)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (wt[i - 1] <= j)
            {
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
            }
            else if (wt[i - 1] > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << endl;
    for (int i = 0; i < dp.size(); i++)
    {
        cout << endl;
        for (int j = 0; j < dp[i].size(); j++)
            cout << dp[i][j] << " ";
    }
    return dp[n][W];
}
int main()
{
    // Knapsack problem
    // Sack with size n, array with some weights, maximise the profit, W
    int const W = 7;
    int const n = 5;
    int wt[] = {2, 5, 1, 3, 4}, val[] = {15, 14, 10, 45, 30};
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    for (int i = 0; i <= n; i++) // row bharega
        dp[i][0] = 0;
    for (int i = 0; i <= W; i++) // coloum bharega
        dp[0][i] = 0;
    dp[0][0] = 1;
    cout << endl
         << knapsack(wt, val, W, n, dp);
    return 0;
}