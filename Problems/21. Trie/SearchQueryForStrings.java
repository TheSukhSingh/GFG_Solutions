static void insert(String key) 
{   TrieNode c=root;
   
   for(int i=0;i<key.length();i++)
   {   int in=key.charAt(i)-'a';
       if(c.children[in]==null)
       c.children[in]=new TrieNode();
       c=c.children[in];
   }
   c.isEndOfWord=true;
   // Your code here
}

//Function to use TRIE data structure and search the given string.
static boolean search(String key)
{   TrieNode cd=root;
   
   for(int i=0;i<key.length();i++)
   {   int in=key.charAt(i)-'a';
       if(cd.children[in]==null)
       return false;
       cd=cd.children[in];
   }
   return cd.isEndOfWord;
   // Your code here
}