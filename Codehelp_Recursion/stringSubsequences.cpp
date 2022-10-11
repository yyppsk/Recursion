#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(string str, int i, int size, string ans)
{
    // Base case
    if (i == size)
    {
        cout << ans << " \n";
        return;
    }

    // include
    solve(str, i + 1, size, ans + str[i]);
    // exclude
    solve(str, i + 1, size, ans);
}
int main()
{
    string str = "abc";
    string ans = "";
    solve(str, 0, str.length(), ans);
    return 0;
}