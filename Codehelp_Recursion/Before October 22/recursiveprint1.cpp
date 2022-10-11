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
    if (index == size)
        return;
    // recursion
    array_reverse2(arr, size, index + 1);
    cout << arr[index] << " ";
}
void array_reverse3(int arr[], int index)
{
    // base case
    if (index < 0)
        return;
    cout << arr[index] << " ";
    // recursion
    array_reverse3(arr, index - 1);
}
void array_print_slide(int arr[], int size)
{
    // base case
    if (size == 0)
        return;
    cout << arr[0] << " ";
    array_print_slide(arr + 1, size - 1);
}
int getMax_1(int arr[], int size, int index)
{
    if (index == size)
        return INT_MIN;
    int meraMax = arr[index];
    int recursionAns = getMax_1(arr, size, index + 1);
    return max(meraMax, recursionAns);
}

void getMax_3(int arr[], int size, int index, int &maxi)
{
    if (index == size)
        return;
    maxi = max(maxi, arr[index]);
    getMax_3(arr, size, index + 1, maxi);
}
int firstOcc(int arr[], int target, int index, int size)
{
    if (arr[index] == target)
        return index;
    else if (index == size)
        return -1;
    firstOcc(arr, target, index + 1, size);
}
int lastOcc(int arr[], int target, int index)
{
    if (index == -1)
        return -1;
    if (arr[index] == target)
        return index;
    return lastOcc(arr, target, index - 1);
}
void allOcc(int arr[], int size, int index, int &counter, int target, vector<int> &ans)
{
    if (index > size)
        return;
    if (arr[index] == target)
    {
        counter++;
        ans.push_back(index);
    }
    allOcc(arr, size, index + 1, counter, target, ans);
}
int main()
{
    int arr[] = {65, 3, 41, 3, 47, 95, 3, 3, 18};
    int size = 9;
    print(arr, size, 0);
    cout << endl;
    array_reverse(arr, size, 8);
    cout << endl;
    array_reverse2(arr, size, 0);
    cout << endl;
    array_reverse3(arr, 8);
    cout << endl;
    array_print_slide(arr, size);
    cout << endl;
    cout << getMax_1(arr, size, 0) << endl;
    int maxi = INT_MIN;
    getMax_3(arr, size, 0, maxi);
    cout << maxi << endl;
    cout << "Target at: " << firstOcc(arr, 95, 0, 9) << endl;
    cout << "Target at: " << lastOcc(arr, 3, size - 1) << endl;
    int counter = 0;
    vector<int> ans;
    allOcc(arr, size, 0, counter, 3, ans);
    cout << "Counter : " << counter << endl;
    for (auto i : ans)
    {
        cout << "Index: " << i << endl;
    }
    return 0;
}