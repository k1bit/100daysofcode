// Q109: Print the maximum sum of all subarrays of size k.

/*
Sample Test Cases:
Input 1:
4
100 200 300 400
2
Output 1:
700

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

    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("%d\n", max_sum);
    return 0;
}
