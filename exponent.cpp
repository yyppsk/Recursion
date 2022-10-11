#include <iostream>
using namespace std;
int exponent(int number, int base)
{
    if (base == 0)
        return 1;
    return number * exponent(number, base - 1);
}
int main()
{
    cout << exponent(5, 3);
    return 0;
}