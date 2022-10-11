#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int lis(int prev, int curr, vector<int> nums)
{
    if (curr == nums.size())
    {
        return 0;
    }
    int include = 0;
    int exclude = 0;
    if (prev == -1 || nums[prev] < nums[curr])
    {
        include = 1 + lis(curr, curr + 1, nums);
    }
    else
    {
        exclude = lis(curr, curr + 1, nums);
    }
    return max(include, exclude);
}
int main()
{
    vector<int> arr = {1, 2, 5, 3, 4};
    cout << lis(-1, 0, arr) << endl;
    return 0;
}