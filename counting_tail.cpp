#include <iostream>
using namespace std;
void counting(int number)
{
    if (number == 0)
        return;
    counting(number - 1);
    cout << number << " ";
}
int main()
{
    counting(5);
    return 0;
}