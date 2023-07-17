class Solution:
    def reverseWords(self,S):
        lst = list(S.split('.'))
        x = ''
        for i in lst:
            x = x + i[::-1] + '.'
        x = x[:len(x)-1]
        return x[::-1]

