#include <stdio.h>
#include <string.h>

char* custom_strncpy(char* dest, char* start, int n);

int main(void) {
    /*
        custom_strncpy()
    */

    char str1[100] = "";
    char str2[] = "Hello";
    
    custom_strncpy(str1, str2, 3);
    puts(str1);

    return 0;  
}

char* custom_strncpy(char* dest, char* start, int n)
{
    if (dest == NULL)
        return NULL;    

    char *ptr = dest;
    
    while(n--) {
        *dest = *start;
        dest++;
        start++;
    }
    
    *dest = '\0';

    return ptr;
}
