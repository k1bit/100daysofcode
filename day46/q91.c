// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], res[1000];
    int j = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
        if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
            res[j++] = ch;
        }
    }
    res[j] = '\0';

    printf("%s\n", res);
    return 0;
}
