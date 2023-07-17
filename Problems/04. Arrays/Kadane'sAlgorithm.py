class Solution:
    def maxSubArraySum(self,arr,size):
        indicator_array = [True if i >=0 else False for i in arr]
        if True in indicator_array:
            max_so_far=max_ending_here=0
            for a in range(size):
                max_ending_here = max_ending_here + arr[a]
                if max_ending_here < 0:
                    max_ending_here = 0
                if max_so_far < max_ending_here:
                    max_so_far = max_ending_here
            return (max_so_far)
        elif False in indicator_array and True not in indicator_array:
            return (max(arr))