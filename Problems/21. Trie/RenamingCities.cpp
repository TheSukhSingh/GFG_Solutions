class Solution
{
    public:
    struct TrieNode{
        
        int count;
        bool isEnd;
        TrieNode *children[26];
        
        TrieNode(){
            
            for(int i=0;i<26;i++)
                children[i] = NULL;
                
            count=0;
            isEnd = false;
        }
    };
    

    string getAns(string s,TrieNode *curr){
        bool flag = true;
        
        string ans = "";
        
        for(char ch : s){
            
            int idx = ch - 'a';
            
            if(curr->children[idx] == NULL)
                curr->children[idx] = new TrieNode();
                
            curr = curr->children[idx];
            
            if(flag)
            ans+=ch;
            
            if(curr->count == 0)
                flag = false;
                
            curr->count= curr->count + 1;
        }
        
        if(flag and curr->isEnd)
        ans+=" " + to_string(curr->count);
        
        curr->isEnd = true;
        return ans;
    }
    void check(string *arr, int n){
        TrieNode *root = new TrieNode();
        
        for(int i=0;i<n;i++){
            string s = getAns(arr[i],root);
            cout<<s<<endl;
        }
        return;
    }
};