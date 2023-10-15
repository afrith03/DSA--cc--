class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int j = m;
        for (int i = 0; i < n; i++)
        {
            nums1[j] = nums2[i];
            j++;
        }
        sort(nums1.begin(), nums1.end());
        // insertion sort
        //  for(int i=0;i<m-1;i++){
        //    for(int j=i+1;j<m;j++){
        //        if(nums1[i]>nums1[j]){
        //            swap(nums1[i],nums1[j]);
        //        }
        //    }
        //  }
    }
};