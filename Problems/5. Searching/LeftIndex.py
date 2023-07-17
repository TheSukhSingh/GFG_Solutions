def leftIndex(N, A, x):
    l = 0
    r = N - 1
    def binarySearch(A,l,r,x):
        if x not in A:
            return -1
        mid = l + ((r-l)//2)
        if (A[mid]==x) & ((mid==0) | (A[mid-1]!=x)):
            return mid
        if A[mid] >= x:
            return binarySearch(A,l,mid-1,x)
        if A[mid] < x:
            return binarySearch(A,mid+1,r,x)
    ans = binarySearch(A,l,r,x)
    return ans