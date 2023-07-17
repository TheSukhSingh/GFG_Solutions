class LRUCache
{
    private:
    class Node
    {
        public:
        int key;
        int val;
        Node* next;
        Node* prev;
        Node(int k,int v)
        {
            key=k;
            val=v;
            next=NULL;
            prev=NULL;
        }
    };
    public:
    Node* head=new Node(-1,-1);
    Node* tail=new Node(-1,-1);
    // Using map will give TLE
    unordered_map<int,Node*> m;
    int cap;
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int c)
    {   
        head->next=tail;
        tail->prev=head;
        cap=c;
        // code here
    }
    
    void addNode(Node* newNode)
    {
        Node* temp=head->next;
        head->next=newNode;
        temp->prev=newNode;
        newNode->next=temp;
        newNode->prev=head;
    }
    
    void deleteNode(Node* node)
    {
        Node* p=node->prev;
        Node* n=node->next;
        p->next=n;
        n->prev=p;
    }
    //Function to return value corresponding to the key.
    int GET(int k)
    {   
        if(m.find(k)!=m.end())
        {
            Node* result=m[k];
            int res=result->val;
            m.erase(k);
            deleteNode(result);
            addNode(result);
            m[k]=head->next;
            return res;
        }
        return -1;
        // your code here
    }
    
    //Function for storing key-value pair.
    void SET(int k, int value)
    {   if(m.find(k)!=m.end())
        {
            Node* existing=m[k];
            m.erase(k);
            deleteNode(existing);
        }
        if(cap==m.size())
        {
            Node* last=tail->prev;
            int ka=last->key;
            m.erase(ka);
            deleteNode(last);
        }
        Node* nn=new Node(k,value);
        addNode(nn);
        m[k]=head->next;
        // your code here   
    }
};