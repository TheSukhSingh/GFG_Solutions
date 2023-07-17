
class Solution:
    
    #Function to find the first position with different bits.
    def posOfRightMostDiffBit(self,m,n):
        #Your code here
        if m==n:
            return -1
        xor=m^n
        return math.log2(xor&(~(xor-1)))+1