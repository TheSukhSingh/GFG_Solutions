class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    
     bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        
        unordered_map<char, char> mp;
        
        int len1 = str1.length();
        int len2 = str2.length();
        
        unordered_set<char> s1;
        unordered_set<char> s2;
        
        
        for(int i=0;i<len1;++i){
            s1.insert(str1[i]);
            s2.insert(str2[i]);
        }
        
        if(s1.size()!=s2.size()) return false;
        
        if(len1!=len2) return false;
        
        for(int i=0;i<len1;++i){
            
            char one = str1[i];
            char two = str2[i];
            
            if(mp.find(one)!=mp.end()){
                if(mp[one]!=two) return false;
            }else{
                mp[one]=two; 
            }    
        }
        
        return true;
        
    }
    
};