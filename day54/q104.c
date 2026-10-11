// Q104: Find the pivot integer x such that sum(1..x) equals sum(x..n).

/*
Sample Test Cases:
Input 1:
8
Output 1:
6

Input 2:
4
Output 2:
-1

*/

#include <stdio.h>
#include <math.h>

int main() {
    long long n;

    scanf("%lld", &n);

    long long total = n * (n + 1) / 2;
    long long x = (long long)sqrt((double)total);

    if (x * x == total) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}
