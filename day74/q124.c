// Q124: Copy content from a source file to a destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
source.txt destination.txt
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main() {
    char src[256], dst[256];

    scanf("%s %s", src, dst);

    FILE *fin = fopen(src, "r");
    if (fin == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    FILE *fout = fopen(dst, "w");
    if (fout == NULL) {
        fclose(fin);
        printf("Error opening destination file!\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(fin)) != EOF) {
        fputc(ch, fout);
    }

    fclose(fin);
    fclose(fout);
    printf("File copied successfully to %s\n", dst);
    return 0;
}
