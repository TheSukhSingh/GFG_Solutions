class Solution:
    #Function to fill the array elements into a hash table 
    #using Linear Probing to handle collisions.
    def linearProbing(self,hashSize, arr, sizeOfArray):
        #Your code here
        
        hash_arr = [-1] * hashSize
        
        for n in arr:
            ind = n % hashSize
            
            temp = ind
            while hash_arr[ind] != -1:
                
                #if hash_arr already has that element
                if hash_arr[ind] == n:
                    break
                
                ind += 1
                ind %= hashSize
                
                #if hash_arr is full
                if ind == temp:
                    break
            
            #insert only of there is empty slot    
            if hash_arr[ind] == -1:
                hash_arr[ind] = n
            
        return hash_arr