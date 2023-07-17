
class Solution
{   
    public:
    //Function for finding determinant of matrix.
    
   vector<vector<int> > submatrix(int t,vector<vector<int> > temp,int n){
        vector<vector<int> > temp1;
        for(int j=0;j<n;j++){
            int cnt=0;
            vector<int> cv;
             for(int k=0;k<n;k++){
                 if(j!=0 && k!=t){
                     cv.push_back(temp[j][k]);
                     cnt++;
                 }
                 
             }
             if(!cv.empty()){
             temp1.push_back(cv);
             }
            
        }
        return temp1;
    }
    
    int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {  vector<vector<int> > matrix1 =matrix;
        int sum =0;
        if(n==1){
            return matrix1[0][0];
        }
        else if(n==2){
            return matrix1[0][0]*matrix1[1][1]-matrix1[1][0]*matrix1[0][1];
        }
        else{
            int sign=1;
            for(int i=0 ;i<n;i++){
                vector<vector<int> > temp=submatrix(i,matrix1,n);
                sum+=sign*matrix1[0][i]*determinantOfMatrix(temp,temp[0].size());
                sign=-sign;
            }
        }
        return sum;
    }
};