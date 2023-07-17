#Function to generate binary numbers from 1 to N using a queue.
def generate(N):
    # code here
    return [str(bin(i)[2:]) for i in range(1,N+1)]