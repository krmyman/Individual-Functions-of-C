#include<stdio.h>
#include<stdlib.h>
#define SPACE ' '
int main()
{
    char ch;
    while ((ch = getchar()) != "\n")
    {
        if (ch >= 65 && ch <= 90)
            putchar(ch + 32);
        else
            if (ch >= 97 && ch <= 122)
                putchar(ch - 32);
            else if (ch == SPACE) putchar('*');
    }
    putchar(ch);
    system("pause");
    return 0;
}