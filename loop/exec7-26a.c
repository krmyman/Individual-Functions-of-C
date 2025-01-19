#include<stdio.h>
#include<stdlib.h>
#include"area.h"
int main()
{
    int r, L=5, H=5, B, TH;
    printf("圓形的半徑：");
    scanf("%d", &r);
    printf("圓形的面積：");
    printf("%4.2f\n", CIRCEL(r));
    printf("長方形的長和寬：");
    scanf("%d %d", &L, &H);
    printf("長方形的面積：");
    printf("%1.2f\n", RECTANGLE(L, H));
    printf("三角形的底和高：");
    scanf("%d %d", &B, &TH);
    printf("三角形的面積：");
    printf("%1.2f\n", TRIANGLE(B, TH));
    system("pause");
    return 0;
}