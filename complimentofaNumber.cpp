class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int m = n;
        int mask = 0;
        if (n==0){
            return 1;
        }
        while (m != 0)
        {
            // right shift till 0 to get the count for mask
            m = m >> 1;
            // left shift to form 1111
            mask = (mask << 1) | 1;
        }
        int ans = ~n & mask;
        return ans;
    }
};