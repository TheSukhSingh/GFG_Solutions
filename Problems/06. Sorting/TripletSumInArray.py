class Solution:
    def find3Numbers(self,A, n, X):
        A.sort()
        for i in range(n-2):
            l=i+1
            r=n-1
            while l<r:
                cur_sum = A[i]+A[l]+A[r] 
                if cur_sum == X:
                    return True
                elif cur_sum < X:
                    l=l+1
                else:
                    r=r-1
        return False