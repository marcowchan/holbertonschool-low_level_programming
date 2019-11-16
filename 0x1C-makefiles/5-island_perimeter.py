#!/usr/bin/python3
"""Defines a island_perimeteter function."""


def island_perimeter(grid):
    """Computes the perimeter of an island.."""
    count = 0
    for row in grid:
        size = len(row)
        row.insert(0, 0)
        row.append(0)
    grid.insert(0, [0 for x in range(size + 2)])
    grid.append([0 for x in range(size + 2)])

    for e, row in enumerate(grid):
        for i, num in enumerate(row):
            if num == 1:
                if grid[e][i - 1] != 1:
                    count += 1
                if grid[e][i + 1] != 1:
                    count += 1
                if grid[e - 1][i] != 1:
                    count += 1
                if grid[e + 1][i] != 1:
                    count += 1
    return count
