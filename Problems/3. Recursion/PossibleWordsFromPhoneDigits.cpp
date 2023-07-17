class Solution
{
    public:
    void allwords(int a[],int N,string num[],int i,string curr,vector<string> &res){
        if(i==N){
            res.push_back(curr);
            return;
        }
        string temp=num[a[i]];
        for(int j=0;j<temp.length();j++){
            allwords(a,N,num,i+1,curr+temp[j],res);
        }
    }
    vector<string> possibleWords(int a[], int N)
    { 
        vector <string> res;
          if(N==0){
        return res;
    }
        string num[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string curr="";
        allwords(a,N,num,0,curr,res);;
        return res;
    }
};