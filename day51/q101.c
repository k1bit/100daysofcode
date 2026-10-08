// Q101: Find the first and last occurrence of a target in a sorted array.

/*
Sample Test Cases:
Input 1:
6
5 7 7 8 8 10
8
Output 1:
3,4

Input 2:
6
5 7 7 8 8 10
6
Output 2:
-1,-1

*/

#include <stdio.h>

int find_bound(int nums[], int n, int target, int find_first) {
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;
            if (find_first) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n, target;

    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &target);

    int first = find_bound(nums, n, target, 1);
    int last = find_bound(nums, n, target, 0);

    printf("%d,%d\n", first, last);
    return 0;
}
