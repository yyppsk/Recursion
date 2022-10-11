#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool isSubsequence(string s, string t, int p = 0)
{
    for (int i = 0; i < t.size(); i++)
    {
        // cout<<"Comparing "<<s[p]<<" with "<<t[i]<<" When i = "<<i<<endl;
        if (s[p] == t[i])
        {
            p++;
            if (p == s.size())
                break;
        }
    }
    return p == s.size();
}
void solve(string t, int size, int i, vector<string> &sequence, string ans, string s)
{
    if (i == size)
    {
        cout << ans << " \n";
        if (ans == s)
        {
            cout << "Found a match " << s << " and " << ans;
        }
        return;
    }
    // include
    solve(t, t.length(), i + 1, sequence, ans + t[i], s);
    // exclude
    solve(t, t.length(), i + 1, sequence, ans, s);
}
void isSubsequence(string s, string t)
{
    vector<string> sequence;
    string ans = "";
    solve(t, t.length(), 0, sequence, ans, s);
    for (auto i : sequence)
    {
        cout << i << "\n";
    }
}
//  USING DYNAMIC PROGRAMMING
// if LCS of string A  nd B is equal to Size of String A then its True else false;

class Solution
{
public:
    int helper(string x, string y)
    {
        int m = x.size();
        int n = y.size();
        int dp[m + 1][n + 1];
        for (int i = 0; i <= m; i++)
        {
            dp[i][0] = 0;
        }
        for (int i = 0; i <= n; i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (x[i - 1] == y[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = dp[i][j - 1];
                }
            }
        }
        return dp[m][n];
    }
    bool isSubsequence(string smaller, string larger)
    {

        int x = helper(smaller, larger);
        if (x == smaller.size())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    string s = "abc", t = "mjmqqjrmzkvhxl";
    isSubsequence(s, t);
    return 0;
}