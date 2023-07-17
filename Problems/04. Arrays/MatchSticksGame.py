class Solution:
    def matchGame(self, N):
         # code here
        if N==1:
            return 1
        elif N%5==0:
            return -1
        else:
            return N%5
