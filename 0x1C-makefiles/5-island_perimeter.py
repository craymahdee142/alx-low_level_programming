#/usr/bin/python3
"""Define as island perimeter of the measuring func"""

def island_perimeter(grid):
    """return perimeter of the island
    grid represents water by 0 & 1
    """
    width = len(grid[0])
    height = len(grid)
    size = 0
    edge = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edge += 1
    return size * 4 - edge * 2
