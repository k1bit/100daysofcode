// Q122: Open an existing file (info.txt) and read its contents using fgets().

/*
Sample Test Cases:
Output 1:
Name: Rahul
Age: 23

*/

#include <stdio.h>

int main() {
    char line[256];
    FILE *fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("Error opening info.txt\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
