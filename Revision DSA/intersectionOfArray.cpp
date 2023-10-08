#include <bits/stdc++.h>
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> vect;
    int i, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            vect.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return vect;
}