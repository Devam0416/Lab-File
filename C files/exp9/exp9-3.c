#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("newfile.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("Reading file line by line:\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}