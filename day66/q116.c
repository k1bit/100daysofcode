// Q116: Find two distinct indices i and j such that nums[i] + nums[j] == target.

/*
Sample Test Cases:
Input 1:
4
2 7 11 15
9
Output 1:
0 1

*/

#include <stdio.h>

int main() {
    int n, target;

    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    return 0;
}
