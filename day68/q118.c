// Q118: Find the missing number in an array containing integers from 0 to n.

/*
Sample Test Cases:
Input 1:
4
0 3 2 4
Output 1:
1

*/

#include <stdio.h>

int main() {
    int n, sum = 0, val;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        sum += val;
    }

    int expected = n * (n + 1) / 2;
    printf("%d\n", expected - sum);
    return 0;
}
