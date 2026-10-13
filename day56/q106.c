// Q106: Find the next greater element for each array element (brute force).

/*
Sample Test Cases:
Input 1:
4
1 3 2 4
Output 1:
3, 4, 4, -1

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
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        if (i > 0) printf(", ");
        printf("%d", next);
    }
    printf("\n");

    return 0;
}
