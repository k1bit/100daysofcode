// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

#include <stdio.h>

int main() {
    int num, temp, first, last, middle, pow10 = 1, swapped;

    scanf("%d", &num);

    if (num < 10) {
        swapped = num;
    } else {
        last = num % 10;
        temp = num;

        while (temp >= 10) {
            temp /= 10;
            pow10 *= 10;
        }

        first = temp;
        middle = (num % pow10) / 10;
        swapped = last * pow10 + middle * 10 + first;
    }

    printf("%d\n", swapped);
    return 0;
}