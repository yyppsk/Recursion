// CPP program to perform minimal number
// of operations to make the MEX of the
// set equal to the given number x.
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;


// function to find minimum number of
// operations required
vector<int> collison(vector<int> direction, vector<int> strength)
{
    stack<int> s;
    for (int i = 0; i < direction.size(); i++)
    {
        if (direction[i] > 0 || s.empty())
            s.push(i);
        else
        {
            while (!s.empty() && direction[s.top()] > 0 && strength[i] > strength[s.top()])
                s.pop();
            if (s.empty() || direction[s.top()] < 0)
                s.push(i);
            else if (strength[s.top()] == strength[i])
                s.pop();
        }
    }
    vector<int> res(s.size());
    for (int i = res.size() - 1; i >= 0; i--)
    {
        res[i] = s.top();
        s.pop();
    }
    return res;
}

int minOpeartions(int arr[], int n, int x)
{
    int k = x, i = 0;
    while (n--)
    {

        // if the element is less than x.
        if (arr[n] < x)
        {
            k--;
            i++;
        }

        // if the element equals to x.
        if (arr[n] == x)
        {
            k++;
            i++;
        }
    }
    return i;
}

// driver function
int main()
{
    vector<int> a = {1, 1}, b = {3, 4};
    vector<int> arr = collison(a, b);
    for (auto i : arr)
    {
        cout << i << endl;
    }
}
