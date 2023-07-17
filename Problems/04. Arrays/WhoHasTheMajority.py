class Solution:
    def majorityWins(self, arr, n, x, y):
        import collections
        counts = collections.Counter(arr)
        if counts[x] > counts[y]:
            return x
        elif counts[x] < counts[y]:
            return y
        else:
            return min(x,y)