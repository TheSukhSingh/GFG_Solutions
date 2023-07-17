class Solution:
    def majorityElement(self, A, N):
        import collections
        freqs = collections.Counter(A)
        for k,v in freqs.items():
            if v > N/2:
                return k
        return -1