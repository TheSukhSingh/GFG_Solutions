
class Solution{
    //Function to add two numbers represented by linked list.
    static Node addTwoLists(Node first, Node second){
        // code here
        // return head of sum list
        Node l1 = reverse(first);
        Node l2 = reverse(second);
        Node temp = new Node(0);
        Node temp2 = temp;
        int sum = 0, carry = 0;
        while(l1 != null || l2 != null || carry != 0) {
            sum = carry;
            if(l1 != null) {
                sum += l1.data;
                l1 = l1.next;
            }
            if(l2 != null) {
                sum += l2.data;
                l2 = l2.next;
            }
            Node node = new Node(sum % 10);
            temp2.next = node;
            temp2 = temp2.next;
            carry = sum / 10;
        }
        Node ans = reverse(temp.next);
        return ans;
    }
    static Node reverse(Node head) {
        Node prev = null;
        Node curr = head;
        while(curr != null) {
          Node next = curr.next;
          curr.next = prev;
          prev = curr;
          curr = next;
        }
        return prev;
    }
}