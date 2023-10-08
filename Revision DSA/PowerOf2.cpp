class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n <= 0)
            return false;
        return ((n & (n - 1)) == 0);
    }
};

// 00 -1
// 01 -2
// 10 -3
// 11 -4
// 100 -5