// Q119: Find the single repeated element in an array in one iteration.

/*
Sample Test Cases:
Input 1:
4
1 3 3 4
Output 1:
3

*/

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    int nums[n];
    int seen[100001] = {0};
    int repeated = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if (seen[nums[i]] && repeated == -1) {
            repeated = nums[i];
        }
        seen[nums[i]] = 1;
    }

    printf("%d\n", repeated);
    return 0;
}
