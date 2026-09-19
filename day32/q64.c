// Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};

    scanf("%lld", &num);

    if (num < 0) num = -num;
    if (num == 0) {
        freq[0] = 1;
    } else {
        while (num > 0) {
            freq[num % 10]++;
            num /= 10;
        }
    }

    int max_digit = 0;
    for (int d = 1; d < 10; d++) {
        if (freq[d] > freq[max_digit]) {
            max_digit = d;
        }
    }

    printf("%d\n", max_digit);
    return 0;
}
