class Solution
{   
    public:
    //Function to reverse the columns of a matrix.
    void reverseCol(vector<vector<int> > &matrix)
    {
        // code here
        for(int i=0;i<matrix.size();i++){
            int low =0,high = matrix[i].size()-1;
            
            while(low<high){
                swap(matrix[i][low],matrix[i][high]);
                low++;
                high--;
            }
        }
    }
};