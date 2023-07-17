class Solution
{
    public static int getCount(Node head)
    {
        if(head == null)
            return 0;
          
        int count = 0;
        
        for(Node curr = head; curr != null;  curr = curr.next)
            count++;
            
        return count;
    }
}