//User function Template for C++

class Solution
{
    public:
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        return log2(n & -n)+1;
    }
};
