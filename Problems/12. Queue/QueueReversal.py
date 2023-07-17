import collections
class Solution:
    def rev(self, q):
        l=collections.deque()
        while q.qsize():
            item = q.get()
            l.appendleft(item)
            # print(1)
        while l:
            item=l.popleft()
            q.put(item)
            # print(2)
        return q