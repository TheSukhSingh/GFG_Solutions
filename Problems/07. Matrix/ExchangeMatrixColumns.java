class Solution
{
    //Function to exchange first column of a matrix with its last column.
    static void exchangeColumns(int matrix[][])
    {
        // code here 
        int col=matrix[0].length-1;
        for (int i=0;i<matrix.length;i++){
            int temp=0;
            temp=matrix[i][0];
            matrix[i][0]=matrix[i][col];
            matrix[i][col]=temp;
        }
    }
}