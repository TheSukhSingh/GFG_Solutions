// User function Template for Java
class GfG
{
    public Queue<Integer> modifyQueue(Queue<Integer> q, int k)
    {
        Stack<Integer> s=new Stack<Integer>();
        Queue<Integer> queue=new LinkedList<Integer>();
        
        int n = q.size();
        while(q.isEmpty()==false)
        {
            s.push(q.poll());
        }
        while(s.isEmpty()==false)
        {
            queue.add(s.pop());   
        }
        int i=1;
        while(i<=n-k)
        {
            s.push(queue.poll());
            i++;
        }
        while(s.isEmpty()==false)
        {
            queue.add(s.pop());   
        } 
        return queue;
    }
}