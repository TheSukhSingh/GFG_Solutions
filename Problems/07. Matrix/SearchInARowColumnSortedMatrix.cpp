class Solution
{
    public:
    bool search(vector<vector<int> > mat, int n, int m, int x) 
    {
        int smallest = mat[0][0], largest = mat[n - 1][m - 1];
            if (x < smallest || x > largest)
                return 0;
           
            int i = 0, j = m - 1;
            int flag=0;
            while (i < n && j >= 0) 
            {
                if (mat[i][j] == x) 
                {
                    return 1;
                }
                if (mat[i][j] > x)
                    j--;
                else
                    i++;
            }
            if(flag==0) return 0;
    }
};