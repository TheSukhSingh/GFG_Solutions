class TwoStacks:
    def __init__(self, n=500):
        self.size = n
        self.arr = [[0 for i in range(n)] for j in range(2)]
        self.low1 = -1
        self.top1 = n
        self.low2 = -1
        self.top2 = n

    # Function to push an integer into stack 1
    def push1(self, x):
        if self.low1 < self.top1:
            self.arr[0][self.low1+1] = x
            self.low1 = self.low1 + 1
        

    # Function to push an integer into stack 2
    def push2(self, x):
        if self.low2 < self.top2:
            self.arr[1][self.low2 + 1] = x
            self.low2 = self.low2+1

    # Function to remove an element from top of stack 1
    def pop1(self):
        if self.low1 >= 0:
            self.low1 = self.low1 - 1
            return self.arr[0].pop(self.low1+1)
        else:
            return -1
            

    # Function to remove an element from top of stack 2
    def pop2(self):
        if self.low2 >= 0:
            self.low2 = self.low2 - 1
            return self.arr[1].pop(self.low2+1)
        else:
            return -1