class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool comp(pair<int,int> a,pair<int,int> b)
    {
        if(a.second > b.second)return true;
        else if(a.second < b.second)return false;
        else if(a.first < b.first)return true;
        else {
            return false;
        }
    }
    
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
        unordered_map<int,int> mp;
        vector<pair<int,int>> tosort;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            tosort.push_back(*it);
        }
        sort(tosort.begin(),tosort.end(),comp);
        vector<int> ans;
        for(auto it=tosort.begin();it!=tosort.end();it++)
        {
            for(int i=0;i<it->second;i++)
            {
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};