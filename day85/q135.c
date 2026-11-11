// Q135: Assign explicit enum values starting from 10 and print them.

/*
Sample Test Cases:
Output 1:
A=10
B=11
C=12

*/

#include <stdio.h>

enum Letters { A = 10, B, C };

int main() {
    printf("A=%d\nB=%d\nC=%d\n", A, B, C);
    return 0;
}
