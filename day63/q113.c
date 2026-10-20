// Q113: Find the kth smallest element in an array.

/*
Sample Test Cases:
Input 1:
10
10 5 4 3 48 6 2 33 53 10
4
Output 1:
5

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

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("%d\n", arr[k - 1]);
    return 0;
}
