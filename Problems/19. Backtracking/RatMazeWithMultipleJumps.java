class RatInMaze 
{
    //Function to find the minimum number of Hops required for the rat to 
    //reach from the source block to the destination block.
    public static void solve(int[][] maze, int N)
    {
        // add your code here
        boolean visited[][] = new boolean[N][N];
        if (ratMaze(0,0, visited, maze, N) == false)
        {
            System.out.println("-1");
        }
        else
        {
            for (int i = 0;i<N;i++)
        {
            for (int j = 0;j<N;j++)
            {
                int m = 0;
                if (visited[i][j] == true)
                {
                    m = 1;
                }
                System.out.print(m + " ");
            }
            System.out.println("");
        }
        }
    }
    
    public static boolean ratMaze(int i, int j, boolean visited[][], int maze[][], int N)
    {
        if (i == N-1 && j == N-1)
        {
            visited[i][j] = true;
            return true;
        }
        if (isSafe(i,j,visited,maze,N) == true)
        {
            visited[i][j] = true;
            int m = maze[i][j];
            for (int n = 0;n<m;n++)
            {
                if(ratMaze(i,j+n+1,visited,maze,N) == true)
                {
                    return true;
                }
                else if (ratMaze(i+n+1,j,visited,maze,N) == true)
                {
                    return true;
                }
            }
            visited[i][j] = false;
        }
        return false;
    }
    
    public static boolean isSafe(int i, int j, boolean visited[][], int maze[][], int N)
    {
        return (i<N && j<N && maze[i][j] != 0);
    }
}