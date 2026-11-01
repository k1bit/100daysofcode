// Q125: Open data.txt in append mode and append a new line of text.

/*
Sample Test Cases:
Input 1:
This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>

int main() {
    char line[1000];

    fgets(line, sizeof(line), stdin);

    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error opening data.txt\n");
        return 1;
    }

    fprintf(fp, "%s", line);
    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
