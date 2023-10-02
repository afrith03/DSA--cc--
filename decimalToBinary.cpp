#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int answer = 0;
    int calc = 0;
    int i = 0;
    cout << "The value of n is: " << n << endl;
    //positive number
    while (n != 0 && n>0)
    {
        cout<<"i"<<i<<endl;
        // int bit = n & 1;
        // cout << "bit " << bit << endl;
        // calc = (bit * pow(10, i));
        // cout << "calc " << calc << endl;
        // answer = calc + answer;
        // cout << "ans "<<answer << endl;
        // cout<< "i " << i<< endl ;
        // n = n >> 1;
        // cout<<"---------------------"<<endl;
        // i++;

        int bit = n & 1;
        answer = (bit * pow(10, i)) + answer;
        n = n >> 1;
        i++;
    }
    
    cout << "given decimal is converted to binary as " << answer << endl;
}