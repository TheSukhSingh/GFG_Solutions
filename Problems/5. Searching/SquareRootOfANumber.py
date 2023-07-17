class Solution:
    def floorSqrt(self, x):
        if str(math.sqrt(x)).split('.')[1] == '0':
            return int(math.sqrt(x))
        else:
            return math.floor(math.sqrt(x))