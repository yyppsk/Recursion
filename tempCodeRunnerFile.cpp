#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(int arr[], int size, int index)
{
    // Base  case
    if (index == size)
        return;
    // operation
    cout << arr[index] << " ";
    // recursion
    print(arr, size, index + 1);
}
void array_reverse(int arr[], int size, int index)
{
    // base case
    if (index == -1)
        return;
    cout << arr[index] << " ";
    // recursion
    array_reverse(arr, size, --index);
}
void array_reverse2(int arr[], int size, int index)
{
    // base case
    if (index > size)
        return;
    // recursion
    array_reverse(arr, size, index++);
    cout << arr[index] << " ";
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int size = 9;
    print(arr, size, 0);
    cout << endl;
    array_reverse(arr, size, 8);
    cout << endl;
    array_reverse2(arr, size, 8);
    return 0;
}