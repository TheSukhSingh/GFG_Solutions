/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        q1.push(x);
}
int QueueStack :: pop()
{
        int a;
        if(q1.empty())
        {
            return -1;
        }
        
        else
        {
            while(!q1.empty())
            {
                if(q1.size() == 1)
                {
                    a=q1.back();
                    break;
                }
                else
                {
                    q2.push(q1.front());
                    q1.pop();
                }
            }
            q1.pop();
        }
        swap(q1,q2);
        return a;
}