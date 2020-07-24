#include <stdio.h>

void print_menu(void);
char input_choice(void);
void count_numbers(void);

int main(void) {

    char letter;
    char c;
    while((letter = input_choice()) != 'q') {
        if (letter == 'a')
            printf("Avengers assemble\n");
        else if (letter == 'b')
            printf("\a\n");
        else if (letter == 'c')
            count_numbers();
        else if (letter == 'q')
            printf("Bye!\n");
        else 
            printf("Wrong input\n");

        char buffer;
        while((buffer = getchar() != '\n')) 
            continue;
    }

    return 0;
}

void print_menu(void) {
    printf("Enter the letter of your choice:\n");
    printf("a. avengers\t\t b. beep\n");
    printf("c. count\t\t q. quit\n");
}

char input_choice(void) {

    print_menu();

    char ans;
    scanf("%c", &ans);

    return ans;
}

void count_numbers(void) {
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) 
        printf("%d\n", i);
}
