#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int knapsack(int wt[], int val[], int W, int n)
{
    // Base condition Smallest Valid input
    if (wt[n - 1] == 0 || n == 0)
        return 0;
    if (wt[n - 1] <= W)
    {
        return max(val[n - 1] + knapsack(wt, val, W - wt[n - 1], n), knapsack(wt, val, W, n - 1));
    }
    else if (wt[n - 1] > W)
    {
        return knapsack(wt, val, W, n - 1);
    }
}
int main()
{
    // Knapsack problem
    // Sack with size n, array with some weights, maximise the profit, W
    int W = 5, n = 4, wt[] = {2, 3, 4, 5}, val[] = {3, 4, 5, 6};
    cout << knapsack(wt, val, W, n);
    return 0;
}