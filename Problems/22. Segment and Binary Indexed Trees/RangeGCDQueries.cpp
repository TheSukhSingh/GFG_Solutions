class Solution
{
    public:
    //Function to find gcd of given range.
    int rhelper(int *st, int l, int r, int ss, int se, int si){
       if(r<ss || l>se) return 0;
       if(l<=ss && r>=se) return st[si];
       int mid = (ss+se)/2;
       return gcd(rhelper(st, l, r, ss, mid, 2*si+1), rhelper(st, l, r, mid+1, se, 2*si+2));
   }
   int findRangeGcd(int l, int r, int st[], int n) 
   {
       // code here
       return rhelper(st, l, r, 0, n-1, 0);
   }
   
   //Function to update a value in input array and segment tree.
   void uhelper(int *st, int ss, int se, int si, int index, int new_val){
       if(index < ss || index > se)return;
       st[si] = new_val;
       if(ss<se){
           int mid = (ss+se)/2;
           uhelper(st, ss, mid, 2*si+1, index, new_val);
           uhelper(st, mid+1, se, 2*si+2, index, new_val);
           st[si] = gcd(st[2*si+1], st[2*si+2]);
       }
   }
   void updateValue(int index, int new_val, int *arr, int st[], int n) 
   {
       // code here
       arr[index] = new_val;
       uhelper(st, 0, n-1, 0, index, new_val);
   }
};