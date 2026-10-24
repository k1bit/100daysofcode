// Q117: Merge two sorted arrays such that the merged array is also sorted.

/*
Sample Test Cases:
Input 1:
4
2 7 11 15
3
4 8 10
Output 1:
2 4 7 8 10 11 15

*/

#include <stdio.h>

int main() {
    int m, n;

    scanf("%d", &m);
    int nums1[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    scanf("%d", &n);
    int nums2[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    while (i < m) merged[k++] = nums1[i++];
    while (j < n) merged[k++] = nums2[j++];

    for (int idx = 0; idx < m + n; idx++) {
        if (idx > 0) printf(" ");
        printf("%d", merged[idx]);
    }
    printf("\n");

    return 0;
}
