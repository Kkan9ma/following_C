#include <stdio.h>
#include <string.h>

char* custom_strncat(char* dest, char* start, int n);

int main(void) {
    /*
        custom_strcat()
    */

    char str1[100] = "First string";
    char str2[] = "Second string";

    custom_strncat(str1, " ", 1);
    custom_strncat(str1, str2, 3);
    puts(str1);

    return 0;  
}

char* custom_strncat(char* dest, char* start, int n)
{
    int dest_length = 0;
    while (*(dest + dest_length) != '\0')
        dest_length++;
    
    int i;
    for (i = 0; start[i] != '\0' && i < n; i++) 
        *(dest + dest_length + i) = *(start + i); 
    
    *(dest + dest_length + i) = '\0';

    return dest;
}
