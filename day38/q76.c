// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>

int main() {
    int r, c, is_sym = 1;

    scanf("%d %d", &r, &c);
    int mat[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (r != c) {
        is_sym = 0;
    } else {
        for (int i = 0; i < r; i++) {
            for (int j = i + 1; j < c; j++) {
                if (mat[i][j] != mat[j][i]) {
                    is_sym = 0;
                    break;
                }
            }
            if (!is_sym) break;
        }
    }

    printf("%s\n", is_sym ? "True" : "False");
    return 0;
}
