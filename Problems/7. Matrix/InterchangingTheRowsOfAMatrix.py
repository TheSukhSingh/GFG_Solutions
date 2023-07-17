class Solution:
    
    #Function to interchange the rows of a matrix.
    def interchangeRows(self,matrix):
        # code here
        start = 0
        end = len(matrix) - 1
    
        while start < end:
            matrix[start], matrix[end] = matrix[end], matrix[start]
            start += 1
            end -= 1
    
        return matrix