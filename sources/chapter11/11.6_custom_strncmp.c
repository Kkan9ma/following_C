#include <stdio.h>
#include <string.h>

int custom_strncmp(char* str1, char* str2, int n);

int main(void) {
    /*
        custom_strncmp()
    */

    printf("%d\n", custom_strncmp("AaBbCc", "AaCbDD", 3));  // -1
    printf("%d\n", custom_strncmp("Baaa", "Aeee", 2));  // 1
    printf("%d\n", custom_strncmp("Cca", "Cba", 1)); // 0

    return 0;  
}

int custom_strncmp(char* str1, char* str2, int n)
{
    while(n--)
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
