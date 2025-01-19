#include<stdio.h>
#include<stdlib.h>
int main()
{
    int idata, irun = 1, isum = 0;
    printf("輸入一個大於1的數值:");
    scanf("%d", &idata);
    rewind(stdin);
    while (irun <= idata)
    {
        if (irun == 1)
        {
            printf("%d", irun);
            isum += irun;
            irun++;
        }
        printf(" + %d", irun);
        isum += irun;
        irun++;
    }
    printf(" = %d\n", isum);
    system("pause");
    return 0;
}