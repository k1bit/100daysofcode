// Q46: Write a program to print a 5x5 grid of stars.

/*
Sample Test Cases:
Output 1:
*****
*****
*****
*****
*****

*/

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
