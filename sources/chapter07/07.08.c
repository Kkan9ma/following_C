#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {

    char c;
    int n_chars = 0;
    int n_words = 0;
    int n_lines = 0;

    bool word_flag = false;
    bool line_flag = false;
    
    printf("Enter text : ");

    while((c = getchar()) != '.') {
        if (!isspace(c)) {
            n_chars++;
        }

        if (!word_flag && isspace(c)) {
            n_words++;
            word_flag = true;
        }

        if(!line_flag && isspace(c)) {
            n_lines++;
            line_flag = true;
        }

        if (isspace(c))
            word_flag = false;

        if (c == '\n')
            line_flag = false;
    }

    printf("%d %d %d", n_chars, n_words, n_lines);

    return 0;
}