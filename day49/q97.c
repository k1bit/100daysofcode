// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if ((i == 0 && str[i] != ' ') || (i > 0 && str[i - 1] == ' ' && str[i] != ' ')) {
            printf("%c.", str[i]);
        }
    }
    printf("\n");

    return 0;
}
