#include <stdio.h>
#include <string.h>

int custom_strcmp(char* str1, char* str2);

int main(void) {
    /*
        custom_strcmp()
    */

    printf("%d\n", custom_strcmp("A", "B"));  // -1
    printf("%d\n", custom_strcmp("B", "A"));  // 1
    printf("%d\n", custom_strcmp("Cca", "Cca")); // 0

    return 0;  
}

int custom_strcmp(char* str1, char* str2)
{
    while(*str1 != '\0')
    {
        if (*str1 == *str2) {
            *str1++;
            *str2++;
            continue;
        }
        if (*str1 == *str2) {
            return 0;
        } else if (*str1 > *str2) {
            return 1;
        } else {
            return -1;
        }
    }
}
