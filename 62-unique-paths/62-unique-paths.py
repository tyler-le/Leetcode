class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        
        # memo[i][j] is the number of paths from [0,0] to [i,j]
        memo = [[1 for j in range(n)]for i in range(m)]
        
        for i in range(1, m):
            for j in range(1, n):
                memo[i][j] = memo[i][j-1] + memo[i-1][j]
        
        return memo[m-1][n-1]