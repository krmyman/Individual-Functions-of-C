//金字塔
#include<stdio.h>
#include<stdlib.h>
int main()
{
    for (int i = 1;i <= 7;i++)
    {
        for (int j = 6 - i;j >= 0;j--)
            printf("%c", ' ');
        for (int k = 1;k <= i * 2 - 1;k++)
            printf("*");
        printf("\n");
    }//13* *7 *7
    system("pause");
    return 0;
}