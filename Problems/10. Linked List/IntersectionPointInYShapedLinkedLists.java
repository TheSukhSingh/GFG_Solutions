/* Node of a linked list
 class Node {
   int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
 Linked List class
class LinkedList
{
    Node head;  // head of list
}*/

class Intersect {
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node head1, Node head2) {
        Node t1 = head1;
        Node t2 = head2;
        int c = 0, d = 0;

        while (t1 != null) { // Fixed: Check if t1 is not null before accessing t1.next
            c++;
            t1 = t1.next;
        }

        while (t2 != null) { // Fixed: Check if t2 is not null before accessing t2.next
            d++;
            t2 = t2.next;
        }

        int diff = Math.abs(c - d);

        t1 = head1; // Reset t1 to the head of the first list
        t2 = head2; // Reset t2 to the head of the second list

        if (c > d) {
            while (diff-- > 0) {
                t1 = t1.next;
            }
            while (t1 != t2) { // Fixed: Compare nodes, not just data values
                t1 = t1.next;
                t2 = t2.next;
            }
            return (t1 != null) ? t1.data : -1; // Fixed: Handle case where there's no intersection
        } else {
            while (diff-- > 0) {
                t2 = t2.next;
            }
            while (t1 != t2) { // Fixed: Compare nodes, not just data values
                t1 = t1.next;
                t2 = t2.next;
            }
            return (t1 != null) ? t1.data : -1; // Fixed: Handle case where there's no intersection
        }
    }
}