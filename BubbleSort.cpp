#include <iostream>
using namespace std;
// bubble sorting
int main()
{
    int arr[18] = {1, 3, 45, 4, 3, 4, 6, 7, 65, 4, 5, 7, 7, 897, 6, 5, 3, 456};
    int n = 18;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "final" << endl;
    for (int i = 0; i < 18; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}