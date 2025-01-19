#include<stdio.h>
#include<stdlib.h>
int sum(int);
int main()
{
    int idata = 0;
    printf("請輸入項數(必須是>=1整數)");
    scanf("%d", &idata);
    printf("2+6+10....+(2*%d-1)*2 = ", idata);
    printf("2+6...+%d = %3d\n", (2 * idata - 1) * 2, sum(idata));
    system("pause");
    return 0;
}
int  sum(int idata)
{
    int isum = 0;
    for (int i = 1;i <= idata;i++)isum += (2 * i - 1) * 2;
    return isum;
}