class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head==NULL || head->next==NULL) return head;
        struct Node* nextNode=head->next;
        struct Node* tail=head;
        while(tail->next!=NULL && tail!=NULL && nextNode!=NULL){
            Node* nextToNextNode=nextNode->next;
            nextNode->next=tail;
            tail=nextNode;
            nextNode=nextToNextNode;
        }
        head->next = NULL;
        return tail;
    }
    
};