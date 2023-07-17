
class Sol
{
// arr : given array
// n : size of arr
// index : need to update
// new_val : given value to which we need to update index
// st : constructed segment-tree


//Function to update a value in input array and segment tree.
static void updateValue(int arr[], long st[], int n, int index, int val) 
{
    // Your code here
    
    long diff=val-arr[index];
    arr[index]=val;
    update(st,0,n-1,index,0,diff);
}
public static void update(long st[],int ss,int se,int i,int si,long diff){
    if( i<ss || i>se ) return ;
    st[si]=st[si]+diff;
    if(se>ss){
        int mid = ss+(se-ss)/2;
        update(st,ss,mid,i,2*si+1,diff);
        update(st,mid+1,se,i,2*si+2,diff);
        return;
    }
   
}

//Function to return sum of elements in range from index qs (query start)
//to qe (query end).
public static long getSum(long st[], int n, int l, int r) 
{
    // Your code here
    return(f(st,0,n-1,0,l,r));
    
}
public static long f(long st[],int ss,int se,int si,int l,int r){
    if(l>se || r<ss) return 0;
    if(ss>=l && se<=r) return st[si];
    
        int mid = ss+(se-ss)/2;
        return(f(st,ss,mid,2*si+1,l,r)+f(st,mid+1,se,2*si+2,l,r));
    
        
  
    
  
}
}