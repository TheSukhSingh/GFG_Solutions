//User function Template for C++


void makeDoubly(struct Node *head)
{
    Node* a=head;
    Node* b=head;
	a=a->next;
	while(b->next!=NULL)
	{
		a->prev=b;
		a=a->next;
		b=b->next;
	}
}
