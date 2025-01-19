#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand((unsigned)time(NULL));
    int idata, ix = 1, isum = 0;
    while (ix <= 10)
    {
        idata = rand() % 30 + 1;
        if (ix == 1)printf("%d ", idata);
        else printf("+ %d ", idata);
        ix++;
        isum += idata;
    }
    printf("= %d\n", isum);
    system("pause");
    return 0;
}