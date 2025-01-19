#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iab, ibc, ica;
    printf("輸入三角形ABC的三邊長:\nab邊長= ");
    scanf("%d", &iab);
    printf("bc邊長: ");
    scanf("%d", &ibc);
    printf("ca邊長: ");
    scanf("%d", &ica);
    if (iab + ibc > ica)
        printf("所給的邊長可以成為三角形\n");
    else
        printf("不能成為三角形, 因為%d+%d<%d\n", iab, ibc, ica);
    system("pause");
    return 0;

}