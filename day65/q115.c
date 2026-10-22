// Q115: Check if two lowercase strings s and t are valid anagrams.

/*
Sample Test Cases:
Input 1:
anagram
nagaram
Output 1:
Anagram

Input 2:
rat
car
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0};

    scanf("%s %s", s, t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
