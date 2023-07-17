class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        vector<vector<int>> mat(n,vector<int>(n)), matrx(n,vector<int>(n));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[n-1-j][i]=matrix[i][j];
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[i][j]=mat[i][j];
            }
        }
    } 
};