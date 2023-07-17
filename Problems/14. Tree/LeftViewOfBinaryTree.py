#Function to return a list containing elements of left view of the binary tree.
def LeftView(root):
    
    # code here
    ans=[]
    if root is None:
        return ans
    q=[]
    q.append(root)
    
    while q:
        
        l=[]
        for _ in range(len(q)):
            r=q.pop(0)
            l.append(r.data)
            if r.left:
                q.append(r.left)
            
            if r.right:
                q.append(r.right)
        ans.append(l[0]) 
    
    return ans