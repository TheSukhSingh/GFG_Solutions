//Node Structure
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    pair<int,int> solve(Node *root){
        
        if(root == NULL){
            
            pair<int,int> p = make_pair(0,0);
            return p;
        }
        
        pair<int,int> temp1 = solve(root -> left);
        pair<int,int> temp2 = solve(root -> right);
        
        pair<int,int> temp3;
        
        temp3.first =  root -> data + temp1.second + temp2.second;
        temp3.second = max(temp1.first , temp1.second) + max(temp2.first , temp2.second); 
        
        return temp3;
    }
    
    int getMaxSum(Node *root) 
    {
       pair<int,int> ans = solve(root);
       
       int answer = max(ans.first,ans.second);
       
       return answer;
    }
    
};