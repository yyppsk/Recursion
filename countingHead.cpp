#include <iostream>
using namespace std;
void counting(int number)
{
    if (number == 0)
        return;
    cout << number << " ";
    counting(number - 1);
}
int main()
{
    counting(5);
    return 0;
}