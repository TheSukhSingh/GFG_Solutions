class Solution:
    def leaders(self, A, N):
        maxx = A[::-1][0]
        leaders = [maxx]
        for i in A[::-1][1:]:
            if i >= maxx:
                maxx = i
                leaders.append(maxx)
        return leaders[::-1]