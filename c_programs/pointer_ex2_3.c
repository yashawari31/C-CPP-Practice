#include <stdio.h>

int main()
{
    char ch;
    char *ptr;

    ptr = &ch;

    for(ch = 'A'; ch <= 'Z'; ch++)
        printf("%c ", *ptr);

    printf("\n");

    for(ch = 'a'; ch <= 'z'; ch++)
        printf("%c ", *ptr);

    return 0;
}