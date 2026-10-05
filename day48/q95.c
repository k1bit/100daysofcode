// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[1000], s2[1000], doubled[2000];

    scanf("%s %s", s1, s2);

    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(doubled, s1);
    strcat(doubled, s1);

    if (strstr(doubled, s2) != NULL) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
