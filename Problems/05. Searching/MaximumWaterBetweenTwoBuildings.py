class Solution:
    def maxWater(self, height, n): 
        maximum = 0;
        i = 0
        j = n - 1
        while (i < j):
            if (height[i] < height[j]):    
                maximum = max(maximum, (j - i - 1) * height[i]);
                i += 1;
            elif (height[j] < height[i]):
                maximum = max(maximum, (j - i - 1) * height[j]);
                j -= 1; 
            else:    
                maximum = max(maximum, (j - i - 1) * height[i]);
                i += 1;
                j -= 1;     
        return maximum;