#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    for (ch = 'A';ch <= 'Z';ch++)
    {
        if (!(ch % 5))printf("\n");
        printf(" %c = %3d ", ch, ch);
    }
    return 0;
}