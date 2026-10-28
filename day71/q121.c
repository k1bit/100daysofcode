// Q121: Create info.txt, take user's name and age, and write them using fprintf().

/*
Sample Test Cases:
Input 1:
Rahul
23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int age;

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}
