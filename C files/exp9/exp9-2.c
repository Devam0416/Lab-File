#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("newfile.txt", "r"); // Open existing file
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("Reading file character by character:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}