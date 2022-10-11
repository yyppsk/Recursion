#include <iostream>
#include <vector>
using namespace std;
int fibb(int number)
{
    int next, a, b;
    //base to initialization
    a = 0;
    b = 1;
    for (int i = 1; i <= number - 1; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    return next;
}
int main()
{
    cout << fibb(11);
    return 0;
}