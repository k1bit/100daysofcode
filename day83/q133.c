// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>
#include <string.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    char input[10];
    const char *abbr[] = {
        "", "JAN", "FEB", "MAR", "APR", "MAY", "JUN",
        "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"
    };

    scanf("%s", input);

    enum Month m = JAN;
    for (int i = 1; i <= 12; i++) {
        if (strcmp(input, abbr[i]) == 0) {
            m = (enum Month)i;
            break;
        }
    }

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
            break;
    }

    return 0;
}
