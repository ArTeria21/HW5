#include <stdio.h>

int main() {
    int num_rows, num_cols;
    scanf("%d %d", &num_rows, &num_cols);

    int matrix[num_rows][num_cols];
    for (int row = 0; row < num_rows; row++) {
        for (int col = 0; col < num_cols; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    int max_sum_col = -1, max_sum = 0, min_sum_col = -1, min_sum = 0;
    for (int col = 0; col < num_cols; col++) {
        int sum = 0;
        for (int row = 0; row < num_rows; row++) {
            sum += matrix[row][col];
        }
        if (max_sum_col == -1 || sum > max_sum) {
            max_sum_col = col;
            max_sum = sum;
        }
        if (min_sum_col == -1 || sum < min_sum) {
            min_sum_col = col;
            min_sum = sum;
        }
    }

    for (int row = 0; row < num_rows; row++) {
        int temp = matrix[row][max_sum_col];
        matrix[row][max_sum_col] = matrix[row][min_sum_col];
        matrix[row][min_sum_col] = temp;
    }

    for (int row = 0; row < num_rows; row++) {
        for (int col = 0; col < num_cols; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}