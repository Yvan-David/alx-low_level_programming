#include "main.h"
#include <stdio.h>
void print_buffer(char *b, int size)
{
    char a[] = "1234567n";
    while(*b != '0')
    {
        for(int i = 0; i < 10; i++)
        {  
            if (*b == ('\\' + a[i]))
                {printf("-");}
            printf("%c",*b);
            b++;
        }
        printf("\n");
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";

    printf("%s\n", buffer);
    printf("---------------------------------\n");
    print_buffer(buffer, sizeof(buffer));
    return (0);
}