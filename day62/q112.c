// Q112: Find the maximum sum of any contiguous subarray using Kadane's algorithm.

/*
Sample Test Cases:
Input 1:
7
2 3 -8 7 -1 2 3
Output 1:
11

Input 2:
2
-2 -4
Output 2:
-2

*/

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int curr = arr[0], best = arr[0];
    for (int i = 1; i < n; i++) {
        curr = (arr[i] > curr + arr[i]) ? arr[i] : curr + arr[i];
        if (curr > best) {
            best = curr;
        }
    }

    printf("%d\n", best);
    return 0;
}
