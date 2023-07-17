class Solution
{
    public:
    //Function to count the number of substrings that start and end with 1.
    long binarySubstring(int n, string a){
        
        int count = 0;
        int onesCount = 0;
    

        for (int i = 0; i < a.length(); i++) {
            if (a[i] == '1') {
                onesCount++;
            }
        }

        count = (onesCount * (onesCount - 1)) / 2;

        return count;
    }

};
