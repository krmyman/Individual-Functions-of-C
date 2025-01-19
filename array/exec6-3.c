#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int x = 1, y = 1;
    printf("**************************九九乘法表**************************\n");
    do
    {
        do
        {
            printf("%d*%d=%2d ", x, y, x * y);
            y++;
        } while (y <= 9);
        printf("\n");
        x++;
        y = 1;

    } while (x <= 9);
    printf("**************************************************************\n");
    system("pause");
    return 0;
}