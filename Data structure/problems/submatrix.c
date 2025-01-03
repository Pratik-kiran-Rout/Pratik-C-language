#include <stdio.h>

int countSquares(int matrix[][300], int rows, int cols) {
    int dp[rows][cols];
    int count = 0;

    // Iterate over the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // If it's the first row or first column, dp[i][j] is same as matrix[i][j]
            if (i == 0 || j == 0) {
                dp[i][j] = matrix[i][j];
            } else if (matrix[i][j] == 1) {
                // Find the minimum of the three neighboring cells without a ternary operator
                int minValue = dp[i-1][j];
                if (dp[i][j-1] < minValue) {
                    minValue = dp[i][j-1];
                }
                if (dp[i-1][j-1] < minValue) {
                    minValue = dp[i-1][j-1];
                }
                dp[i][j] = 1 + minValue;
            } else {
                dp[i][j] = 0;
            }
            // Add the value at dp[i][j] to count
            count += dp[i][j];
        }
    }
    return count;
}

int main() {
    int matrix[300][300];
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the matrix (0s and 1s):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int result = countSquares(matrix, rows, cols);
    printf("Total number of square submatrices with all 1s: %d\n", result);

    return 0;
}