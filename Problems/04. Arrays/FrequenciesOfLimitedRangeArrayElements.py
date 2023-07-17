class Solution:
    #Function to count the frequency of all elements from 1 to N in the array.
    def frequencyCount(self, arr, N, P):
        # code here
        d_f = {}
        for i in arr:
            if i in d_f.keys():
                d_f[i] += 1
            else:
                d_f[i] = 1

        for i in range(1, N + 1):
            if i in d_f.keys():
                arr[i - 1] = d_f.get(i)
            else:
                arr[i - 1] = 0

        return arr


