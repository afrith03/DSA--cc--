#include <iostream>
using namespace std;
bool isEvenNumber(int num)
{
    if (num % 2)
    {
        return false;
    }
    return true;
}
// find sum of even numbers in an array L1Q1
int main()
{
    int ans = 0;
    int arr[6] = {1, 3, 5, 100, 5, 8};
    for (int i = 0; i < 6; i++)
    {
        if (isEvenNumber(arr[i]))
        {
            ans = ans + arr[i];
        }
    }

    cout << "sum of Even numbers in the given array is " << ans;
    return 0;
}