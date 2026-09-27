// Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>

int main() {
    int r, c;

    scanf("%d %d", &r, &c);
    int mat[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int first = 1;
    for (int d = 0; d <= r + c - 2; d++) {
        int i_min = (d - c + 1 > 0) ? (d - c + 1) : 0;
        int i_max = (d < r - 1) ? d : (r - 1);

        if (d % 2 == 0) {
            for (int i = i_max; i >= i_min; i--) {
                int j = d - i;
                if (!first) printf(" ");
                printf("%d", mat[i][j]);
                first = 0;
            }
        } else {
            for (int i = i_min; i <= i_max; i++) {
                int j = d - i;
                if (!first) printf(" ");
                printf("%d", mat[i][j]);
                first = 0;
            }
        }
    }
    printf("\n");

    return 0;
}
