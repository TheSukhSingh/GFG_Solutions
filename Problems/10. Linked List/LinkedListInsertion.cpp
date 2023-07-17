class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* start=new Node(x);
       start->next=head;
       return start;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       if(head==NULL){
           Node* end=new Node(x);
           return end;
       }
       Node* node=head;
       while(node->next!=NULL){
           node=node->next;
       }
       Node* end=new Node(x);
       node->next=end;
       return head;
    }
};