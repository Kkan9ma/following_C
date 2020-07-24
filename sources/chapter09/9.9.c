#include <stdio.h>

void conversion_to_binary(int n);

int main(void) {

    int n;
    printf("Input: ");
    scanf("%d", &n);

    printf("\n<<Converting...>\n");

    printf("Result: ");
    conversion_to_binary(n);

    return 0;
}

void conversion_to_binary(int n) {

    int remainder = n % 2;
    if (n >= 2) {
        conversion_to_binary(n / 2);
    }

    printf("%d", remainder);

    return;
}