bool search(Node* root, int x)
{
    if(root!=NULL)
    {
        if(root->data==x)
        return(true);
        else if(root->data>x)
        return(search(root->left,x));
        else
        return(search(root->right,x));
    }
    else
    return(false);
}