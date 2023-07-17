class Solution:
    def arrange(self,arr, n): 
        for i in range(n):
            arr.append(arr[arr[i]])
        arr[:] = arr[n:]