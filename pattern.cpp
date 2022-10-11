#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    int print = 1;
    int i = 1;
    while (print < n)
    {
        int i = 1;
        while (i <= row)
        {
            cout << print << " ";
            print++;
            i++;
        }
        cout << endl;
        row++;
    }
    return 0;
}