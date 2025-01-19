#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand((unsigned)time(NULL));
    float average = 00.00, ft;
    int idata = 0, sum = 0, ix = 0, i100 = 0, i90up = 0, i80up = 0, i70up = 0, i60up = 0, i0up = 0;
    while (ix <= 500)
    {
        printf("第%d位同學:", ix);
        ft = (float)rand() / RAND_MAX;
        idata = (int)(ft * 100);
        printf("%d\n", idata);
        if (idata == 100)
            i100++;
        else if (idata >= 90)
            i90up++;
        else if (idata >= 80)
            i80up++;
        else if (idata >= 70)
            i70up++;
        else if (idata >= 60)
            i60up++;
        else
            i0up++;
        sum += idata;
        ix++;
    }
    ix--;
    printf("  100分共有 %4d 位同學\n", i100);
    printf("99~90分共有 %4d 位同學\n", i90up);
    printf("89~80分共有 %4d 位同學\n", i80up);
    printf("79~70分共有 %4d 位同學\n", i70up);
    printf("69~60分共有 %4d 位同學\n", i60up);
    printf(" 59~0分共有 %4d 位同學\n", i0up);
    average = (float)sum / (float)ix;
    printf("共有 %4d 筆成績  總成績: %6d  平均成績 %4.2f\n", ix, sum, average);
    system("pause");
    return 0;
}