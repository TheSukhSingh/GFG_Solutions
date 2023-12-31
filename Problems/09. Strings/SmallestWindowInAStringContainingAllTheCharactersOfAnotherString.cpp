class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {   
        int freq[26]={0};
        int tar=0;
        set<char> st;
        for(int i=0;i<p.size();i++)
        {   
            
            if(freq[p[i]-'a']==0)
            {
                tar++;
                st.insert(p[i]);
            }
            freq[p[i]-'a']++;
        }
        
        
        int i=0;
        int j=0;
        int cnt=0;
        
        int sz=INT_MAX;
        string ans="";
        while(j<s.size())
        {
            if(freq[s[j]-'a']==0 && st.find(s[j])==st.end())
            {
                j++;
                continue;
            }
            freq[s[j]-'a']--;
            if(freq[s[j]-'a']==0)
            {
                cnt++;
            }
            if(cnt==tar)
            {   
                
                while(tar==cnt)
                {   
                    if(freq[s[i]-'a']==0 && st.find(s[i])==st.end())
                    {
                        i++;
                        continue;
                    }
                    freq[s[i]-'a']++;
                    if(freq[s[i]-'a']>0)
                    {
                        cnt--;
                    }
                    i++;
                }
                if(sz>j-i+2)
                {   
                    ans=s.substr(i-1,j-i+2);
                    //cout << ans<<endl;
                    sz=j-i+2;
                }
            }
            j++;
        }
        
        if(ans.size()==0)
            return "-1";
        //cout << sz << endl;
        return ans;
    }
        // Your code here
};