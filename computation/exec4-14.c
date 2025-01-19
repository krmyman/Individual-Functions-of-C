#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int ix = 0;
    if(ix==1)printf("ix==1\n");
    if(ix=1)printf("ix=1\n");//ix會被定義為1
    printf("輸入ix的值:");
    scanf("%d",&ix);
    if(ix != 1)printf("ix的值!=1 , ix=%d \n",ix);
    if(!(ix%2))printf("ix=%d , 所以ix是偶數\n",ix);
    if(!(ix)%2)printf("ix=%d , 所以ix是偶數\n",ix);
    system("pause");
    return 0;
}