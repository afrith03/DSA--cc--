#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << i + j;
        };

        cout << endl;
    };

    return 0;
}