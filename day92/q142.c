// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Asha 101 90
Ravi 102 85
Neha 103 92
Aman 104 88
Sita 105 95
Output 1:
Name: Asha | Roll: 101 | Marks: 90
Name: Ravi | Roll: 102 | Marks: 85
Name: Neha | Roll: 103 | Marks: 92
Name: Aman | Roll: 104 | Marks: 88
Name: Sita | Roll: 105 | Marks: 95

*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    for (int i = 0; i < 5; i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}
