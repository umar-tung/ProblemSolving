class Solution:
    def findPaths(self, m: int, n: int, N: int, i: int, j: int) -> int:
        if m  <= 0 or n <=0:
            return 0
        
        # grid = m x n 
        # if the ball is off the grid then return 1 path
        # else
        # find a new path with 1 less move
        # things to consider: it is mirrored so at some point only need to multiply
        # the original side to solve the the opposing side. May even be some square
        # properties
        
        memoize = dict()
        return self.helperPaths(m-1,n-1,N,i,j, memoize)
    def helperPaths(self, m: int, n: int, N: int, i: int, j: int, memoize: dict) -> int:
        key = "" + str(N) + " "+ str(i) + " " + str(j) 
        if key in memoize:
            return memoize[key]
        if  i < 0 or i > m or j < 0 or j > n  :
            return 1
        if  N == 0 :
            return 0
        leftPaths = self.helperPaths(m,n,N-1,i-1,j,memoize)
        rightPaths = self.helperPaths(m,n,N-1,i+1,j,memoize)
        upPaths = self.helperPaths(m,n,N-1,i,j+1,memoize)
        downPaths = self.helperPaths(m,n,N-1,i,j-1,memoize)
        
        value = int((leftPaths + rightPaths + upPaths + downPaths) % (10**9 + 7))
        memoize[key] = value
        return value
