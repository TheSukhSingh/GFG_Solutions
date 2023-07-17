#User function Template for python3
class Solution:
    
    #Function to fill the array elements into a hash table 
    #using Quadratic Probing to handle collisions.
    
    def get_hash_key(self, ele, hashSize, i):
        return (ele+i**2) % hashSize
    
    
    def inser_into_hash_table(self, ele, hash_table, hashSize):
        i = 0
        key = self.get_hash_key(ele, hashSize, i)
        while hash_table[key] != -1:
            # check if element already present
            if hash_table[key] == ele:
                return
            i += 1
            key = self.get_hash_key(ele, hashSize, i)
            key %= hashSize
        hash_table[key] = ele
        
        
    def QuadraticProbing(self,hash, hashSize, arr, N):
        #Your code here
        for ele in arr:
            self.inser_into_hash_table(ele, hash, hashSize)
    
        return hash
