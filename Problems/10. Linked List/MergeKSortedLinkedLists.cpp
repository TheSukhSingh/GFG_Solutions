/*
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/ 

class Solution{
  public:
    //Function to merge K sorted linked list.
    struct compare{
        bool operator()(struct Node* a, struct Node* b) {
            return a->data > b->data;
        }
    };
    
    Node * mergeKLists(Node *arr[], int K)
    {
        // Your code here
        priority_queue<Node*,vector<Node*>,compare>pq;
        for(int i=0;i<K;i++){
            if(arr[i]!=NULL){
                pq.push(arr[i]);
            }
        }
        Node* head = new Node(-1);
        Node* curr = head;
          while (!pq.empty()) {
              Node* top = pq.top();
              pq.pop();
              curr->next = top;
              curr = top;
              if (top->next) pq.push(top->next);
          }
          curr->next = NULL;
          return head->next;
    }
};
