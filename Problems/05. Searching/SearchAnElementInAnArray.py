class Solution:
    def search(self,A, N, x):
        if x in A:
            return A.index(x)
        else:
            return -1