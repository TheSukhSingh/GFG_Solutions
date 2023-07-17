
class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        unordered_map<string,int>mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        string ans;
        int it=0;
        for(int i=0;i<n;i++){
            if(mp[arr[i]]>=it){
                it=mp[arr[i]];
                mp[arr[i]]=0;
                ans=arr[i];
            }
        }
        return ans;
    }
};