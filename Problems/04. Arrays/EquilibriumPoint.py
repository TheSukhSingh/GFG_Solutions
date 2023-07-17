
class Solution:
    def equilibriumPoint(self,A, N):
        total = sum(A)
        r = 0
        for index in range(N-1, -1, -1):
            l = total - r - A[index]
            if l==r:
                return index+1
            r += A[index]
        return -1
