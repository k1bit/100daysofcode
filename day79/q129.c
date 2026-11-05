// Q129: Read space-separated integers from numbers.txt and print sum and average.

/*
Sample Test Cases:
Output 1:
Sum = 150
Average = 30.00

*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening numbers.txt\n");
        return 1;
    }

    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);
    double avg = (count > 0) ? (double)sum / count : 0.0;
    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}
