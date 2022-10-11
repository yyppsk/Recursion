#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(string &str, int i, int j)
{ // lover
    if (i >= j)
        return;
    swap(str[i], str[j]);
    solve(str, i + 1, j - 1);
}
void bawla_traverse(string str, int i, string &st2)
{
    if (i == str.length())
        return;
    bawla_traverse(str, i + 1, st2);
    st2.push_back(str[i]);
    cout << "While pushing " << str[i] << " Index was " << i << endl;
}
int main()
{
    string str = "babbar";
    string st2 = "";
    int j = str.size();
    // solve(str, 0, str.size() - 1);
    // bawla_traverse(str, 0, st2);
    cout << "Answer " << st2;
    return 0;
}