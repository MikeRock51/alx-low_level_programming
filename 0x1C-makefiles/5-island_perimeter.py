#!/usr/bin/python3
"""A function that returns the perimeter of the island described in grid:"""


def island_perimeter(grid):
    """grid is a list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100

        Grid is completely surrounded by water,
            and there is one island (or nothing).
        The island doesn’t have “lakes” (water inside that isn’t
            connected to the water around the island).
    """

    if len(grid) == 0:
        return (0)

    perimeter = 0
    row_index = 0
    for row in grid:
        col_index = 0
        for col in row:
            if col == 1:
                if col_index > 0:
                    if row[col_index - 1] == 0:
                        perimeter += 1
                if col_index < len(row) - 1:
                    if row[col_index + 1] == 0:
                        perimeter += 1
                if row_index > 0:
                    if grid[row_index - 1][col_index] == 0:
                        perimeter += 1
                if row_index < len(grid) - 1:
                    if grid[row_index + 1][col_index] == 0:
                        perimeter += 1
            col_index += 1
        row_index += 1
    return (perimeter)
