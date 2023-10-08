#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 2, 3, 3, 4, 4, 4, 5, 5};
    // Array has to be sorted
    //  sort(arr.begin(), arr.end());

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << arr[i] << " ";
        }
        while (arr[i] == arr[i + 1])
        {
            i++;
        }
    }

    return 0;
}