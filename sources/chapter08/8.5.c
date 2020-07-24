#include <stdio.h>

int main(void) {

    int rows, cols;
    char c;

    printf("Input one character and two integers: \n");

    while((c = getchar()) != '\n') {
        scanf("%d %d", &rows, &cols);
        
        while(getchar() != '\n') continue;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                putchar(c);
            }
            printf("\n");
        }

        printf("Input another character and two integers: \n");
        printf("Press [Enter] to quit.\n");
    }

    return 0;
}