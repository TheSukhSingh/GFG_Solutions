def graphColoring(graph, k, V):
    color = [0]*V
    def isPossibleCol(node,col,graph,V):
        for i in range(V):
            if graph[node][i]==1 and color[i]==col:
                return False
        return True
    def solve(graph,node,V):
        if node == V:
            return True
        for col in range(1,k+1):
            if isPossibleCol(node,col,graph,V):
                color[node] = col
                if solve(graph,node+1,V) == True:
                    return True
                color[node] = 0
        return False
    return solve(graph,0,V)