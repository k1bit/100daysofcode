// Q130: Store student records into students.txt with fprintf() and read them with fscanf().

/*
Sample Test Cases:
Input 1:
2
Asha 101 85
Ravi 102 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main() {
    int n, roll, marks;
    char name[100];

    scanf("%d", &n);

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening students.txt\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error reading students.txt\n");
        return 1;
    }

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);

    return 0;
}
