class Solution
{
    public:
    //Function to merge two nodes a and b.
    int find(int x,int para[])
    {
        if(x==para[x])
        return x;
        else
        return find(para[x],para);
    }
    
    
    void unionNodes( int a, int b, int arr[], int rank1[], int n) 
    {
        //code here
        int x_rep = find(a,arr);
        int y_rep = find(b,arr);
        
        if(x_rep == y_rep)
        return ;
        else if(rank1[x_rep]<rank1[y_rep])
        arr[x_rep]=y_rep;
        else if(rank1[x_rep]>rank1[y_rep])
        arr[y_rep]=x_rep;
        else
        {
            arr[y_rep]=x_rep;
            rank1[x_rep]++;
        }
        
     }
    
    //Function to determine number of connected components.
    int findNumberOfConnectedComponents( int n, int arr[], int rank1[]) 
    {
        //code here
        set<int> s;
        for(int i=1;i<=n;i++)
        s.insert(find(i,arr));
        return s.size();
    }
};