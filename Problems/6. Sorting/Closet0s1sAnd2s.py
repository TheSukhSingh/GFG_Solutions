class Solution:
    def segragate012(self,a, n):
        c0 = a.count(0)
        c1 = a.count(1)
        c2 = a.count(2)
        for i in range(c0):
            a[i] = 0
        for i in range(c0,c0+c1):
            a[i] = 1
        for i in range(c0+c1,c0+c1+c2):
            a[i] = 2
