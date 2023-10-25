#!/usr/bin/python3
"""This module contains island_perimeter function"""


def island_perimeter(grid):
    """This i the island_perimeter function"""
    total_peri = 0
    size_g = len(grid)
    for i in range(size_g):
        size_i = len(grid[i])
        for j in range(size_i):
            if grid[i][j] == 1:
                peri = 4
                if j - 1 > 0:
                    if grid[i][j - 1] != 1:
                        peri = peri - 1
                if j + 1 < size_i:
                    if grid[i][j + 1] != 1:
                        peri = peri - 1
                if i - 1 > 0:
                    if grid[i - 1][j] != 1:
                        peri = peri - 1
                if i + 1 < size_g:
                    if grid[i + 1][j] != 1:
                        peri = peri - 1
                total_peri = total_peri + peri
    return total_peri
