class Solution
{
    public:
    Node* copyList(Node* head) {
        Node* dummy = new Node{0};
        Node* ans = dummy;
        Node* temp = head;
        unordered_map<Node*, Node*> m;
    
        while (temp) {
            ans->next = new Node(temp->data);
            ans = ans->next;
            m[temp] = ans;
            temp = temp->next;
        }
    
        temp = head;
        Node* clone = dummy->next;
    
        while (temp) {
            clone->arb = m[temp->arb];
            temp = temp->next;
            clone = clone->next;
        }
    
        return dummy->next;
    }

};