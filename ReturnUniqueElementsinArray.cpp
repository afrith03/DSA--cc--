#include <bits/stdc++.h>
vector<int> findDuplicates(vector<int> &arr, int n)
{
    vector<int> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++)
    {

        if (arr[i] == arr[i + 1])
        {
            ans.push_back(arr[i]);
        }
        while (arr[i] == arr[i + 1])
        {
            i++;
        }
    }
    return ans;
}