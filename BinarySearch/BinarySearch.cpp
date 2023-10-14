#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int key)
{
    int start = 0;
    int end = arr.size() - 1;
    int midPoint = (start + end) / 2;
    while (start <= end)
    {
        if (arr[midPoint] == key)
        {
            return midPoint;
        }
        else if (key > arr[midPoint])
        {
            start = midPoint + 1;
        }
        else
        {
            end = midPoint - 1;
        }
        midPoint = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(8);
    arr.push_back(10);
    arr.push_back(28);
    arr.push_back(32);
    arr.push_back(47);
    arr.push_back(54);
    arr.push_back(55);
    cout << "size of array " << arr.size() << endl;
    int ans = binarySearch(arr, 28);
    cout << "the search result " << ans;

    return 0;
}