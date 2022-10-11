#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int knapsack(int wt[], int val[], int W, int n, vector<vector<int>> dp)
{
    if (wt[n - 1] == 0 || n == 0)
        return 0;
    if (dp[n][W] != -1)
    {
        return dp[n][W];
    }
    if (wt[n - 1] <= W)
    {
        return dp[n][W] = max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n - 1, dp), knapsack(wt, val, W, n - 1, dp));
    }
    else if (wt[n - 1] > W)
    {
        return knapsack(wt, val, W, n - 1, dp);
    }
}
int main()
{
    // Knapsack problem
    // Sack with size n, array with some weights, maximise the profit, W
    int const W = 5;
    int const n = 4;
    int wt[] = {2, 3, 4, 5}, val[] = {3, 4, 5, 6};
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    cout << knapsack(wt, val, W, n, dp);
    return 0;
}