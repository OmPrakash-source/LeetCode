# Last updated: 5/10/2026, 11:47:45 PM
class Solution(object):
    def countNegatives(self, grid):
        m = len(grid)          # number of rows
        n = len(grid[0])       # number of columns
        x = 0                  # start at row 0
        y = n - 1              # start at last column (top-right)
        res = 0
        
        while x < m and y >= 0:
            if grid[x][y] < 0:     # current cell is negative
                y -= 1             # move left
                res += m - x       # all rows from x to bottom in this column are negative
            else:
                x += 1             # move down (current column has no more negatives above)
        
        return res