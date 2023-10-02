#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }

    int answer = 1;
    for (int i = 1; i <= b; i++)
    {
        answer = a * answer;
    }
    return answer;
}

int main()
{
    int n = 33;
    for (int i = 0; i <= 30; i++)
    {
        if (n == power(2, i))
        {
            cout << "this is power of 2"<<endl;
        }
    }
        cout << "this is not power of 2";

    return 0;
}