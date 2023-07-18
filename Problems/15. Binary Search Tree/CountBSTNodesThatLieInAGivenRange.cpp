class Solution{
public:
    int ct(Node *root, int l, int h,int &count)
    {
        if(root==NULL)
        return 0;
        ct(root->left,l,h,count); 
        if(root->data>=l && root->data<=h)
        count++;
        ct(root->right,l,h,count); 
        return count;
        
    }
    int getCount(Node *root, int l, int h)
    { 
        int count=0;
        if(root==NULL)
        return 0;
        return ct(root,l,h,count);
    }
};