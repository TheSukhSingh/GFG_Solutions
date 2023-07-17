//Function to insert string into TRIE.
void insert(struct TrieNode *root, string key)
{
    // code here
    struct TrieNode *node= root;
    for(int i= 0; i<key.length(); i++)
    {
        if(node->children[key[i]-'a']== NULL)
        {
            node->children[key[i]-'a']= getNode();
        }
        node= node->children[key[i]-'a'];
    }
    node->isLeaf= true;
}

//Function to use TRIE data structure and search the given string.
bool search(struct TrieNode *root, string key) 
{
    // code here
    struct TrieNode *node= root;
    for(int i= 0; i<key.length(); i++)
    {
        if(node->children[key[i]-'a']== NULL)
        {
            return false;
        }
        else
        {
            node= node->children[key[i]-'a'];
        }
        
    }
    return node->isLeaf;
    
}