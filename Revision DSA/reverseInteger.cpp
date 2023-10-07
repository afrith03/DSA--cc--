#include <iostream>
using namespace std;
// revers an Integer 
int main()
{
    int ans = 0;
    int number = 1234;

    while (number != 0)
    {
        int digit = number % 10;
        ans = (ans * 10) + digit;
        number = number / 10;
    }
    cout << ans << endl;

    return 0;
}