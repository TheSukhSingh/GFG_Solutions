class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool isSafe(int grid[N][N],int row,int col,int num){
        for(int i=0;i<9;i++){
            if(grid[row][i]==num){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(grid[i][col]==num){
                return false;
            }
        }
        int startRow=row-(row%3);
        int startCol=col-(col%3);
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(grid[startRow+i][startCol+j]==num){
                    return false;
                }
            }
        }
        return true;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==0){
                    for(int n=1;n<=9;n++){
                        if(isSafe(grid,i,j,n)==true){
                            grid[i][j]=n;
                            if(SolveSudoku(grid)){
                                return true;
                            }
                            else{
                                grid[i][j]=0;
                            }
                        }
                    }
                    return false;
                }
            }
        }
    return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        if(SolveSudoku(grid)){
            for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                    cout<<grid[i][j]<<" ";
                }
            }
        }
    }

};