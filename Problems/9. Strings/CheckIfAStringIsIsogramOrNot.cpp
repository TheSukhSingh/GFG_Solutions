class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
       int hash[256]={0};
       for(int i=0;i<s.size();i++){
           hash[s[i]]++;
       }
       for(int i=0;i<s.size();i++){
           if(hash[s[i]]>1)
           return 0;
       }
       return 1;
    }
};