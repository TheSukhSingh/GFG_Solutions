class Solution
{   
    public:
    vector<int> boundaryTraversal(vector<vector<int> > mat, int n, int m) 
    {
        vector<int>res;
        if(n==1)
            for(int i=0;i<m;i++)
                res.push_back(mat[0][i]);
        else if(m==1)
            for(int i=0;i<n;i++)
                res.push_back(mat[i][0]);
        else{
            for(int i=0;i<m;i++)
                res.push_back(mat[0][i]);
            for(int i=1;i<n;i++)
                res.push_back(mat[i][m-1]);
            for(int i=m-2;i>=0;i--)
                res.push_back(mat[n-1][i]);
            for(int i=n-2;i>=1;i--)
                res.push_back(mat[i][0]);
        }
        return res;
    }
};