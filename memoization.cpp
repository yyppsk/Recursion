#include <iostream>
#include <vector>
using namespace std;
int fibb(int number)
{
    vector<int> dp(number + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < number + 1; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[number];
}
int main()
{
    cout << fibb(10);
    return 0;
}