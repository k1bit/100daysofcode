// Q107: Find the previous greater element for each array element (brute force).

/*
Sample Test Cases:
Input 1:
4
1 3 2 4
Output 1:
-1, -1, 3, -1

*/

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int prev = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        if (i > 0) printf(", ");
        printf("%d", prev);
    }
    printf("\n");

    return 0;
}
