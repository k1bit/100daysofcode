// Q111: Find the first negative integer in each subarray of size k.

/*
Sample Test Cases:
Input 1:
5
-8 2 3 -6 10
2
Output 1:
-8 0 -6 -6

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
        int first_neg = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                first_neg = arr[j];
                break;
            }
        }
        if (i > 0) printf(" ");
        printf("%d", first_neg);
    }
    printf("\n");

    return 0;
}
