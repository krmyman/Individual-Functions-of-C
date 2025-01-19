//矩陣相加
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[3][3] = { 0 }, B[3][3] = { 0 }, C[3][3] = { 0 }, flag = 0, x = 0, y = 0;
    printf("輸入3*3A矩陣的數值:\n");
        for (int i = 0;i <= 2;i++)
    {
        for (int j = 0;j <= 2;j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    rewind(stdin);
        printf("輸入3*3B矩陣的數值:\n");
                for (int i = 0;i <= 2;i++)
    {
        for (int j = 0;j <= 2;j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0;i <= 2;i++)
        for (int j = 0;j <= 2;j++)
            C[i][j] = A[i][j] + B[i][j];
    printf("加總後的陣列:\n");
    for (int i = 0;i <= 2;i++)
    {
        for (int j = 0;j <= 2;j++)
        {
            printf(" %2d ", C[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}