#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ix, iy, iz, imin;
    printf("請輸入三個數 中間留一個空白:");
    scanf("%d%d%d", &ix, &iy, &iz);
    imin = ix < iy ? ix : iy;
    imin = imin < iz ? imin : iz;
    printf("較小數為: %d\n", imin);
    system("pause");
    return 0;
}