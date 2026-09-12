// Q50: Write a program to print an inverted right-aligned triangle of stars.

/*
Sample Test Cases:
Output 1:
*****
 ****
  ***
   **
    *

*/

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        for (int j = 0; j < 5 - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
