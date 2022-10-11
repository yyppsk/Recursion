#include <iostream>
using namespace std;
void spell(int number)
{
    if (number == 0)
        return;
    spell(number / 10);
    switch (number % 10)
    {
    case 1:
        cout << "One ";
        break;
    case 2:
        cout << "Two ";
        break;
    case 3:
        cout << "Three ";
        break;
    case 4:
        cout << "Four ";
        break;
    case 5:
        cout << "Five ";
        break;
    case 6:
        cout << "Six ";
        break;
    case 7:
        cout << "Seven ";
        break;
    case 8:
        cout << "Eight ";
        break;
    case 9:
        cout << "Nine ";
        break;
    case 0:
        cout << "Zero ";
        break;
    default:
        break;
    }
}
int main()
{
    spell(43123648);
    return 0;
}