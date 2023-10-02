
#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount" << endl;
    cin >> amount;
    int Rs100, Rs50, Rs20, Rs1;

    switch (1)
    {
    case 1:
        Rs100 = amount / 100;
        cout << "100 mod of" << amount;
        amount = amount % 100;
        cout << " " << amount << " " << Rs100 << endl;
        cout << "No of 100 Rupee notes required are=" << Rs100 << endl;

    case 2:
        Rs50 = amount / 50;
        cout << "50 mod of" << amount;
        amount = amount % 50;
        cout << " " << amount << " " << Rs50 << endl;
        cout << "No of 50 Rupee notes required are=" << Rs50 << endl;

    case 3:
        Rs20 = amount / 20;
        cout << "20 mod of" << amount;
        amount = amount % 20;
        cout << " " << amount << " " << Rs20 << endl;
        cout << "No of 20 Rupee notes required are=" << Rs20 << endl;

    case 4:
        Rs1 = amount / 1;
        cout << "1 mod of" << amount;
        amount = amount % 1;
        cout << " " << amount << " " << Rs1 << endl;
        cout << "No of 1 Rupee notes required are=" << Rs1 << endl;
    }
}