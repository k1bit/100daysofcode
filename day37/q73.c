// Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int r, c;

    scanf("%d %d", &r, &c);
    int mat[r][c], row_sum[r];

    for (int i = 0; i < r; i++) {
        row_sum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
            row_sum[i] += mat[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        if (i > 0) printf(" ");
        printf("%d", row_sum[i]);
    }
    printf("\n");

    return 0;
}
