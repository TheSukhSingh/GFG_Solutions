class Solution:
    
    def findMedianSortedArrays(self,arr1, N, arr2, M):
        import math
        ar = arr1 + arr2
        ar = sorted(ar)
        if (N+M)%2 == 0:
            a = ar[((N+M)//2)-1]
            b = ar[((N+M)//2) + 1 - 1]
            return math.floor(((a+b)/2))
        else:
            c = ar[((N+M+1)//2)-1]
            return c