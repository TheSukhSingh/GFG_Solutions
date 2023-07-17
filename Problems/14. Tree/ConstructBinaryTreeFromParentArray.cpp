class Solution{
  public:
    //Function to construct binary tree from parent array.
    Node *createTree(int parent[], int N)
    {
        // Your code here
        vector<Node*> v;
        int i;
        for(i=0;i<N;i++)
        v.push_back(new Node(i)); //creating N new nodes and storing it in vector 
        
        Node* temp;
        
        for(i=0;i<N;i++)              // we will be linking the nodes at a position i to its parent node
        {
            if(parent[i]==-1)temp=v[i];    // this will be our root node
            else 
            {
                if(!v[parent[i]]->left)     // if parent node left is null we will assign this node to its left
                v[parent[i]]->left=v[i];
                else                        // otherwise we will assign this node to its right
                v[parent[i]]->right=v[i];
            }
        }
        return temp;
    }
};