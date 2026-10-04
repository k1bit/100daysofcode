// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], longest[1000] = "";
    int max_len = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *token = strtok(str, " ");
    while (token != NULL) {
        int len = strlen(token);
        if (len > max_len) {
            max_len = len;
            strcpy(longest, token);
        }
        token = strtok(NULL, " ");
    }

    printf("%s\n", longest);
    return 0;
}
