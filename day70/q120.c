// Q120: Convert a string to title/sentence case (capitalize each word).

/*
Sample Test Cases:
Input 1:
I am trying to build logic.
Output 1:
I Am Trying To Build Logic.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int new_word = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            new_word = 1;
        } else {
            if (new_word && str[i] >= 'a' && str[i] <= 'z') {
                str[i] -= 32;
            }
            new_word = 0;
        }
    }

    printf("%s\n", str);
    return 0;
}
