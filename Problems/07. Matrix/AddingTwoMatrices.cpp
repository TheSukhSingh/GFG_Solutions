class Solution
{   
    public:
    vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        int n1 = A.size();
        int m1 = A[0].size();
        int n2 = B.size();
        int m2 = B[0].size();
        vector<vector<int> > result;
        if(n1 == n2 && m1 == m2)
        {
            result.resize(n1);
            for(int i=0; i<n1; i++)
            {
                result[i].assign(m1,0);
                for(int j=0; j<m1; j++)
                    result[i][j] = A[i][j] + B[i][j];
            }
        }
        return result;
    }
};