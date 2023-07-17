class Solution{
    public:
    int greyConverter(int n)
    {
        return n ^ (n >> 1); 
    }
};