#include<stdio.h>
#include<stdlib.h>
int main() {
    printf("**************************九九乘法表**************************\n");
    for (int i = 1;i <= 9;i++)
    {
        for (int j = 1;j <= 9;j++)
        {
            printf("%d*%d=%2d ", i, j, i * j);
        }
        printf("\n");
    }
    printf("**************************************************************\n");
    system("pause");
    return 0;
}