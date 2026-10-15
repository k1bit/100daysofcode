// Q108: Print an array where answer[i] is the product of all elements except nums[i].

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
[24,12,8,6]

Input 2:
5
-1 1 0 -3 3
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    int nums[n], ans[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        ans[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(",");
        printf("%d", ans[i]);
    }
    printf("]\n");

    return 0;
}
