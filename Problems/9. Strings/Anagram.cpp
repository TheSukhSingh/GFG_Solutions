class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        unordered_map<char,int> aa;
        unordered_map<char,int> bb;  
        for(int i=0; i<a.length(); i++){
            aa[a[i]]++;
        }
        for(int i=0; i<b.length(); i++){
            bb[b[i]]++;
        }
        if(aa==bb){
            return true;
        }
        return false;
    }
};