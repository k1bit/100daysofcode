// Q52: Write a program to print vertical groups of stars separated by blank lines.

/*
Sample Test Cases:
Output 1:
*

*
*
*

*
*
*
*
*

*
*
*

*

*/

#include <stdio.h>

int main() {
    int counts[] = {1, 3, 5, 3, 1};
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < counts[i]; j++) {
            printf("*\n");
        }
        if (i < n - 1) {
            printf("\n");
        }
    }

    return 0;
}
