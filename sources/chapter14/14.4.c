#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_TITLE 40 // 제목 최대 글자
#define MAX_AUTHOR 40 // 저자 이름 최대
#define MAX_BOOKS 3 /* maximum number of books*/

char* s_gets(char* st, int n) // 문자열을 입력받는 함수
{
    char* ret_val;
    char* find;

    ret_val = fgets(st, n, stdin); // vs. scanf() 빈칸이 있으므로 사용x
    if (ret_val)
    {
        find = strchr(st, '\n');	// look for newline
        if (find)					// if the address is not NULL
            *find = '\0';			// place a null character there
        else
            while (getchar() != '\n')
                continue;			// dispose of rest of line
    }

    return ret_val;
}

struct book
{
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    float price;
};

int main()
{
    struct book library[MAX_BOOKS] = { {"Empty", "Empty", 0.0f} }; // 초기화

    int count = 0;

    while (1)
    {
        printf("Input a book title or press [Enter] to stop. \n>>");

        if (s_gets(library[count].title, MAX_TITLE) == NULL) break;
        if (library[count].title[0] == '\0') break;
        // TODO: input title
        // TODO: break if the first character of the input title is '\0'

        printf("Input the author. \n>>");
        s_gets(library[count].author, MAX_AUTHOR);
        // TODO: input author name

        printf("Input the price. \n>>");
        int flag = scanf("%f", &library[count].price);
        while (getchar() != '\n')
            continue;
        // TODO: input price
        // TODO: clear buffer

        count++;

        if (count == MAX_BOOKS)
        {
            printf("No more books.\n");
            break;
        }
    }

    if (count > 0)
    {
        printf("\nThe list of books: \n");
        for (int index = 0; index < count; index++)
            printf("\"%s\" written by %s: $%.1f\n",
                library[index].title, library[index].author, library[index].price);
    }
    else
        printf("No books to show.\n");

    return 0;
}