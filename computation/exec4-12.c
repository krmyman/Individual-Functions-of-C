#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ix, iy;
    printf("x = ");
    scanf("%d", &ix);
    printf("y = ");
    scanf("%d", &iy);
    if (ix > iy)
    {
        iy = ix * 3 + iy - 5;
        printf("x大於y, x = %d, y = %d\n", ix, iy);
    }
    else if (ix == iy)
    {
        ix = iy * 2 + ix + 2;
        printf("x等於y, x = %d, y = %d\n", ix, iy);
    }
    else
    {
        ix = iy * 5 + ix + 6;
        printf("x小於y, x = %d, y = %d\n", ix, iy);
    }
    system("pause");
    return 0;
}