#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ix, iy, iz, imax;
    printf("請輸入三個數 中間留一個空白:");
    scanf("%d%d%d", &ix, &iy, &iz);
    imax = ix > iy ? ix : iy;
    imax = imax > iz ? imax : iz;
    printf("較大數為: %d\n", imax);
    system("pause");
    return 0;
}