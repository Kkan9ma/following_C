#include <stdio.h>
#include <string.h>

char* custom_strcpy(char* dest, char* start);

int main(void) {
    /*
        custom_strcpy
    */

    char str1[100] = "";
    char str2[] = "Hello";

    custom_strcpy(str1, str2);
    puts(str1);

    return 0;  
}

char* custom_strcpy(char* dest, char* start)
{
    if (dest == NULL)
        return NULL;    

    char *ptr = dest;
    
    while(*start != '\0') {
        *dest = *start;
        dest++;
        start++;
    }
    
    *dest = '\0';

    return ptr;
}
