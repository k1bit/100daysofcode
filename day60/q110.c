// Q110: Find the maximum element in each subarray of size k.

/*
Sample Test Cases:
Input 1:
9
1 2 3 1 4 5 2 3 6
3
Output 1:
3 3 4 5 5 5 6

*/

#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    for (int i = 0; i <= n - k; i++) {
        int max_val = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max_val) {
                max_val = arr[j];
            }
        }
        if (i > 0) printf(" ");
        printf("%d", max_val);
    }
    printf("\n");

    return 0;
}
