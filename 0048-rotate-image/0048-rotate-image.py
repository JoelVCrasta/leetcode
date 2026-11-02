class Solution:
    def rotate(self, matrix: list[list[int]]) -> None:
        n = len(matrix)

        # 1. Transpose (j starts at i)
        for i in range(n):
            for j in range(i, n):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

        # 2. Reverse each row
        for row in matrix:
            row.reverse()