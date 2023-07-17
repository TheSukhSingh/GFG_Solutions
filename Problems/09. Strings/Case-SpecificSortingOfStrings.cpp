class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char>m1,m2;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>=65 && str[i]<=90)
            {
                m1.push_back(str[i]); // pushing capital letters in m1
            }
            else{
                m2.push_back(str[i]);  // pushing small letters in m2
            }
        }
        sort(m1.begin(),m1.end());
        sort(m2.begin(),m2.end());
        string res;
        int l=0,b=0;
        //if the string character is capital push capital character from sorted vector
        //else small
        for(int i=0;i<str.length();i++)
        {
             if(str[i]>=65 && str[i]<=90)
            {
                res+=m1[b];
                b++;
            }
            else{
                res+=m2[l];
                l++;
            }
        }
        return res;
    }
};