// Q123: Read a text file and count characters, words, and lines.

/*
Sample Test Cases:
Output 1:
Characters: 31 Words: 5 Lines: 2

*/

#include <stdio.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening sample.txt\n");
        return 1;
    }

    int ch, chars = 0, words = 0, lines = 0, in_word = 0;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') {
            lines++;
        }
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }
    if (chars > 0 && lines == 0) {
        lines = 1;
    }

    fclose(fp);
    printf("Characters: %d Words: %d Lines: %d\n", chars, words, lines);
    return 0;
}
