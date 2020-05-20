#include <stdio.h>
#include <string.h>

void fit_str(char* str, unsigned int size);

int main() {

    /*
        strlen(): returns length of the string
    */

    // TODO: use debugger
    char msg[] = "Just,"" do it!";
    puts(msg);  // Just, do it!
    printf("Length %d\n", strlen(msg)); // Length 12
    fit_str(msg, 4); 
    puts(msg); // Just
    printf("Length %d\n", strlen(msg)); // Length 4
    
    return 0;
    //TODO: implement fit_str() function
}

/* 
    fit_str
    4 => print 4 words 

*/
void fit_str(char* str, unsigned int size) {
    if (strlen(str) > size)
        str[size] = '\0';
}