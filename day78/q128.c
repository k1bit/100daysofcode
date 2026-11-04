// Q128: Read text.txt and count vowels and consonants.

/*
Sample Test Cases:
Output 1:
Vowels: 8 Consonants: 10

*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error opening text.txt\n");
        return 1;
    }

    int ch, vowels = 0, consonants = 0;
    while ((ch = fgetc(fp)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);
    printf("Vowels: %d Consonants: %d\n", vowels, consonants);
    return 0;
}
