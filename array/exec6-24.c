#include<stdio.h>
#include<stdlib.h>
int main()
{
    for (int i = 9;i >= 1;i--)
    {
        if (i == 9)printf("  *");
        printf("%3d", i);
        if (i == 1)printf("\n");
    }
    for (int i = 9;i >= 1;i--)
    {
        printf("%3d", i);
        for (int j = 9;j >= 1;j--)
        {
            printf("%3d", i * j);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}