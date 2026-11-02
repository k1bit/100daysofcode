// Q126: Check if a given filename exists in read mode and display its content.

/*
Sample Test Cases:
Input 1:
nofile.txt
Output 1:
Error: File does not exist!

*/

#include <stdio.h>

int main() {
    char filename[256], line[256];

    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
