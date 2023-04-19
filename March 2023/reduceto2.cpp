#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int solve(int num)
{
    vector<int> array(num + 1, INT_MAX);
    array[2] = 0;
    for (int i = 2; i < num + 1; i++)
    {
        array[i] = min(array[i + 1], array[i + 3]);
        cout << array[i] << " " << i << endl;
    }

    return 0;
}
/*
int solve(int num)
{
    int op = 0;
    if (num == 2)
        return 0;
    if (num < 2)
        return 0;

    while (num >= 2)
    {
        if (num % 5 == 0 && num != 5)
        {
            num = num / 5;
            op++;
        }
        else
        {
            if (num == 5)
            {
                num = num - 3;
                op++;
                break;
            }
            num = num - 3;
            op++;
        }
    }
    return op;

}
*/
int main()
{
    cout << solve(17);
    return 0;
}