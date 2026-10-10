// Q103: Calculate the leftmost pivot index of an integer array.

/*
Sample Test Cases:
Input 1:
6
1 7 3 6 5 6
Output 1:
3

Input 2:
3
1 2 3
Output 2:
-1

*/

#include <stdio.h>

int main() {
    int n, total = 0;

    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total += nums[i];
    }

    int left_sum = 0;
    for (int i = 0; i < n; i++) {
        if (left_sum == total - left_sum - nums[i]) {
            printf("%d\n", i);
            return 0;
        }
        left_sum += nums[i];
    }

    printf("-1\n");
    return 0;
}
