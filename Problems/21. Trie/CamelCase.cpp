class Solution
{
    struct TrieNode {
        TrieNode *children[ALPHABET_SIZE];
        bool isEndOfWord;
    };
    
    struct TrieNode* getNode() {
        struct TrieNode *pNode = new TrieNode;
        pNode->isEndOfWord = false;
        for(int i=0; i<ALPHABET_SIZE; i++) {
            pNode->children[i] = NULL;
        }
        return pNode;
    }
    
    // insert the abbreviation of the given word in Trie
    // returns  {matched, abbreviation}
    pair<bool, string> insert(TrieNode *root, string str, string pat) {
        bool matched = false; // whether the given word matches the pattern
        string abbr = ""; // abbreviation of the given word
        
        for(auto ch : str) {
            if('A' <= ch && ch <= 'Z') {
                abbr += ch;
                if(!matched && abbr == pat)
                    matched = true;
                int index = ch - 'A';
                if(!root->children[index])
                    root->children[index] = getNode();
                root = root->children[index];
            }
        }
        root->isEndOfWord = true;
        return {matched, abbr};
    }
    
    public:
    //Function to print all words in the CamelCase dictionary 
    //that matches with a given pattern.
    void findAllWords(vector<string> dict, string pattern) 
    {
        //code here
        vector<string> ans;
        map<string, vector<string>> mpp;
        TrieNode *root = getNode();
        
        for(auto word : dict) {
            pair<bool, string> res = insert(root, word, pattern);
            bool matched = res.first;
            string abbr = res.second;
            if(matched) {
                mpp[abbr].push_back(word);
            }
        }
        
        for(auto it : mpp) {
            sort(it.second.begin(), it.second.end());
            for(auto str : it.second)
                ans.push_back(str);
        }
            
        if(ans.size() == 0) {
            cout<<"No match found";
            return;
        }
    
        for(auto str : ans)
            cout<<str<<" ";
        
    }
};