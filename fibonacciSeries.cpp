#include <iostream>
using namespace std;
int fibb(int number)
{
    if (number == 0 || number == 1)
        return number;
    return fibb(number - 1) + fibb(number - 2);
}
int main()
{
    cout << fibb(4);
    return 0;
}