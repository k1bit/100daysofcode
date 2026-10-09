// Q102: Find the index of the ceil of x in a sorted array (first occurrence).

/*
Sample Test Cases:
Input 1:
7
1 2 8 10 11 12 19
5
Output 1:
2

Input 2:
7
1 2 8 10 11 12 19
20
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int n, x;

    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", ans);
    return 0;
}
