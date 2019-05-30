class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        #each column and row is affected by the row and column it is in.
        #the value can be increased to the minimum of the two, so that it does not effect the skyline
        
        #must find the maximum values for rows and columns
        
        #then change the values so that they are equal to the min of the maximum values 
        
        leftSkyline = [max(x) for x in grid]
        
        topSkyline =[max(y) for y in [[grid[j][i] for j in range(len(grid))] for i in range(len(grid[0]))]]
        
        print(topSkyline)
        print(leftSkyline)
        
        total=0
        for counti,i in enumerate(grid):
            for countj,j in enumerate(i):
                total += min(topSkyline[countj],leftSkyline[counti])-j
        return total
