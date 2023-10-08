#include <iostream>
using namespace std;

int main()
//find Unique element in the given array
{

    int arr[5] = {1, 23, 1, 23, 5};
    int ans = 0;

    for (int i = 0; i < 5; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "the unique Element is " << ans;

    return 0;
}