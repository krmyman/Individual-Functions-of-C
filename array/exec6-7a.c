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
        if (ix % 2)//奇數項
        {
            if (ix == 1)printf("%d ", idata);
            else printf("+ %d ", idata);
            isum += idata;

        }
        else if (!(ix % 2))
        {
            printf("- %-d ", idata);//偶數項
            isum -= idata;
        }
        ix++;
    }
    printf("= %d\n", isum);
    system("pause");
    return 0;
}