#include <iostream>
using namespace std;

int main()
{
    int arr[18] = {1, 3, 45, 4, 3, 4, 6, 7, 65, 4, 5, 7, 7, 897, 6, 5, 3, 456};
    int n = 18;

    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {

            // < or > for increasing or decreasing order;
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    for (int i = 0; i < 18; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}