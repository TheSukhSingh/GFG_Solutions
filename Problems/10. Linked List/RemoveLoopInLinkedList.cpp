class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        bool detectloop=false;
      Node*slow=NULL;
      Node*fast=head;
        map<Node*,bool>visited;
        while(fast!=NULL){
            if(visited[fast]==true){
              detectloop=true;
              break;
            }
            visited[fast]=true;
             slow=fast;
            fast=fast->next;
    }
    if(detectloop){
        slow->next=NULL;
    }
    }
};