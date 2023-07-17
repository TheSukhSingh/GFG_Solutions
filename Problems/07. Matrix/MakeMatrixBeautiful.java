class Solution 
{
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    static int findMinOperation(int matrix[][], int n)
    {
        // code here 
        int sum =0;
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++)
            {
                sum = sum + matrix[i][j];
                
            }
        }
        int mx =0;
        for(int i=0;i<n;i++)
        {
            int row = 0;
            int col = 0;
            for(int j=0;j<n;j++)
            {
                row = row + matrix[i][j];
                col = col + matrix[j][i];
            }
            
            mx = Math.max(mx , row);
            mx = Math.max(mx , col);
        }
        int bsum = mx*n;
        
        return bsum - sum;
        
    }
}