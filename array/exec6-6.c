#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int idata, isum = 0, irun = 1;
    printf("輸入一個正整數 n = ");
    scanf("%d", &idata);
    while (irun <= idata)
    {
        if (irun == 1)
        {
            printf("%d^2 + ", irun);
            isum += pow(irun, 2);
            irun++;
        }
        printf("%d^2 + ", irun);
        isum += pow(irun, 2);
        irun++;
    }
    printf("= %d\n", isum);
    system("pause");
    return 0;
}