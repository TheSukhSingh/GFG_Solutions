class Solution:
    
    #Function to check if a string is subsequence of other string.
    def isSubSequence(self, a, b):
        #code here
        i = 0 # for a
        count = 0
        for j in range(len(b)):
            if i < len(a) and a[i] == b[j]:
                count+=1
                i+=1
        if count == len(a):
            return True
        return False