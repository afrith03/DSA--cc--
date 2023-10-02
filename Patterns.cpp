#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    for (int i = 0; i < n; i++)
    {
        for (int col = 0; col < n-i; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < (2*i) -1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

