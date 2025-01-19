#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int x=1, y=1;
    printf("**************************九九乘法表**************************\n");
    while(x<=9)
    {
        while(y<=9)
        {
            printf("%d*%d=%2d ",x,y,x*y);
            y++;
        }
        printf("\n");
        x++;
        y=1;
    }
    printf("**************************************************************\n");
    system("pause");
    return 0;
}