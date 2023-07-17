class Solution:
    def rearrange(self,arr, n): 
        if n%2 == 0:
            for i in range(n//2):
                arr.append(arr[n-1-i])
                arr.append(arr[i])
        else:
            for i in range(n//2):
                arr.append(arr[n-1-i])
                arr.append(arr[i])
            arr.append(arr[math.floor(n/2)])
        arr[:] = arr[n:]
        return arr