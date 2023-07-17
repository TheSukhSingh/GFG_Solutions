
/*
class Node
{
	int data ;
	Node next;
	Node(int d)
	{
		data = d;
		next = null;
	}
}
*/

//Function to delete a node without any reference to head pointer.
class Solution
{
    void deleteNode(Node node)
    {
        if(node.next == null){
            node = null;
            return;
        }
        
        node.data = node.next.data;
        Node next = node.next;
        node.next = node.next.next;
        next.next =  null;
    }
}