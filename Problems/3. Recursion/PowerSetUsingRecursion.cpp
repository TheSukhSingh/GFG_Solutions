
//Function to return the lexicographically sorted power-set of the string.
void power(string s ,string output,int idx,vector<string>&ans){
    if(output.size()>=s.size()){
        ans.push_back(output);
        return;
    }
    power(s,output+s[idx],idx+1,ans);
    power(s.substr(1),output,idx,ans);
}

vector <string> powerSet(string s)
{
   //Your code here
   vector<string>ans;
    power(s,"",0,ans);
    return ans;
}
