#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(int arr[], int size)
{
    if (size < 1)
        return;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    solve(arr, size / 2);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    solve(arr, 7);
    return 0;
}