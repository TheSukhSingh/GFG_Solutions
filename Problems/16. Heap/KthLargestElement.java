class Solution 
{
    public static int KthLargest(int arr[], int n, int k) {
        if(n<k)
            return -1;
            
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        
        for(int i=0;i<k;i++)
            minHeap.add(arr[i]);
            
        for(int i=k;i<n;i++)
            if(arr[i]>minHeap.peek()){
                minHeap.poll();
                minHeap.add(arr[i]);
            }
            
        return minHeap.peek();
    }
}