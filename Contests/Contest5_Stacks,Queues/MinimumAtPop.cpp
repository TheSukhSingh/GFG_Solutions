//User function Template for C++

/* inserts elements of the array into 
   stack and return the stack
*/

stack<int>_push(int arr[],int n)
{
   stack<int> p;
   int x=arr[0];
   for(int i=0;i<n;i++)
   {
       x=min(x,arr[i]);
       p.push(x);
   }
   return p;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
}
}