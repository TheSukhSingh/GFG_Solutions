def withoutAdjacent(arr): 
    a = 0
    b = 0
     
    for i in arr: 
          

        newB = b if b>a else a 
         

        a = b + int(i)
        b = newB 
      

    return (b if b>a else a) 

if __name__ == '__main__':
    t = int(input())
    for c in range(t):
        N = int(input())
        arr = input().strip().split()
        print (withoutAdjacent(arr))