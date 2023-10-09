#include <bits/stdc++.h>
//selection sort algorithm
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minimum] > arr[j])
            {
                minimum = j;
            }
        }
        swap(arr[minimum], arr[i]);
    }
}