class StackQueue
{
    Stack<Integer> s1 = new Stack<Integer>();
    Stack<Integer> s2 = new Stack<Integer>();

    void Push(int x)
    {
       s1.push(x);
    }
    int Pop()
    {
       int x;
       if(s1.isEmpty() && s2.isEmpty())
        { 
        return -1;
        }
       if(s2.isEmpty())
        {
            while(!s1.isEmpty())
            {
            x= s1.pop();
            s2.push(x);
            }
        }
       x=s2.pop();
       return x;
    }
}