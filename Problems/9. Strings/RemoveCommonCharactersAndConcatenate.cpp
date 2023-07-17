
class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
      string concatenatedString(string s1, string s2) 
    { 
       int freq[26]={0};
          for(int i=0;i<s1.size();i++)
          {
              freq[s1[i]-'a']=1;
          }
          for(int i=0;i<s2.size();i++)
          {
              if(freq[s2[i]-'a']==1||freq[s2[i]-'a']==5)
              freq[s2[i]-'a']=5;
              else
              freq[s2[i]-'a']=-1;
          }
          string ans="";
          int i=0,j=0;
          while(i<s1.size())
          {
              if(freq[s1[i]-'a']== 1)
              ans.push_back(s1[i]);
              i++;
          }
           while(j<s2.size())
          {
              if(freq[s2[j]-'a']== -1)
              ans.push_back(s2[j]);
              j++;
          }
          if(ans.empty())
          return "-1";
          return ans;
    }

};