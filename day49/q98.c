// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char *last_space = strrchr(str, ' ');
    if (last_space == NULL) {
        printf("%s\n", str);
        return 0;
    }

    for (int i = 0; &str[i] < last_space; i++) {
        if ((i == 0 && str[i] != ' ') || (i > 0 && str[i - 1] == ' ' && str[i] != ' ')) {
            printf("%c.", str[i]);
        }
    }
    printf(" %s\n", last_space + 1);

    return 0;
}
