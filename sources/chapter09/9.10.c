#include <stdio.h>

/*
    Fibonacci sequence
    1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
*/

int fibonacci(int number);

int main(void) {
    for (int count = 1; count < 13; count++) {
        printf("%d ", fibonacci(count));
    }

    return 0;
}

int fibonacci(int number) {
    if (number < 2)
        return number;
    else {
        return fibonacci(number - 2) + fibonacci(number - 1);
    }

}