#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
};
// Swap alternate elements in an array
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        // cout << " " << endl;
    };
}
int main()
{
    // code here
    int arr[6] = {1, 3, 2, 4, 3, 5};
    swapAlternate(arr, 6);
    printArray(arr, 6);

    return 0;
}