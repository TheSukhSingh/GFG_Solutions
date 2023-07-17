/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        QueueNode *temp = new QueueNode(x);
        if (front == NULL){
            front = rear = temp;
            return;        
        }
        rear->next = temp;
        rear = temp;
}

int MyQueue :: pop()
{
        if (front == NULL)
            return -1;
        QueueNode *head1 = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        int res = head1->data;
        delete head1;
        return res;
}