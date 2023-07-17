class Solution:
    def checkRotatedAndSorted(self,arr,n):
        cup,cdn = 0,0
        for i in range(1,n):
            if arr[i] > arr[i-1]:
                cup += 1
            if arr[i] < arr[i-1]:
                cdn += 1
        if ((cup == n-2) & (cdn == 1) & (arr[0] > arr[n-1])) | ((cdn == n-2) & (cup==1) & (arr[0] < arr[n-1])):
            return True
        else:
            return False