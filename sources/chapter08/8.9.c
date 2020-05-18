#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char c;
    char* file_name = "my_file.txt";
    FILE* fp = NULL;

    fp = fopen(file_name, "r");
    if (fp == NULL) {
        printf("Failed to open file.\n");
        exit(1);
    }

    while((c = getc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);

    return 0;
}