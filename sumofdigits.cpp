#include <iostream>
#include <vector>
#include <algorithm>
int solve(int n, int sum)
{
    if (n / 10 < 1)
    {
        return 1;
    }
    return n % 10 + solve(n / 10, sum);
}
using namespace std;
int main()
{
    int digit = 1234, sum;
    sum = solve(digit, 1);
    cout << sum;
    return 0;
}