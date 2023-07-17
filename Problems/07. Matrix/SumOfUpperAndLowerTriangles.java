class Solution
{
    //Function to return sum of upper and lower triangles of a matrix.
    static ArrayList<Integer> sumTriangles(int matrix[][], int n)
    {
        int sumup=0;
        int sumdown=0;
        int sumdig =0;
        ArrayList <Integer> list = new ArrayList<>();
        for (int i=0;i<matrix.length;i++){
            for (int j=i;j<matrix[0].length;j++){
                sumup+=matrix[i][j];
            }
        }
        for (int i=0;i<matrix.length;i++){
            for (int j=i;j>=0;j--){
                sumdown+=matrix[i][j];
            }
        }
       
       list.add(sumup); 
       list.add(sumdown); 
        return list;
    }
}