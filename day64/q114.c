// Q114: Find the length of the longest substring without repeating characters.

/*
Sample Test Cases:
Input 1:
abcabcbb
Output 1:
3

Input 2:
bbbbb
Output 2:
1

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int last_seen[256];

    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }

    scanf("%s", s);

    int left = 0, max_len = 0;
    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char ch = (unsigned char)s[right];
        if (last_seen[ch] >= left) {
            left = last_seen[ch] + 1;
        }
        last_seen[ch] = right;
        int len = right - left + 1;
        if (len > max_len) {
            max_len = len;
        }
    }

    printf("%d\n", max_len);
    return 0;
}
