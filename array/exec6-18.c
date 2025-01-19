#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int it, idata[6] = { 0 }, irun = 1;
    srand((unsigned)time(NULL));
    while (irun <= 100000)
    {
        it = rand() % 6 + 1;
        switch (it)
        {
        case 1:
            idata[0]++;
            break;
        case 2:
            idata[1]++;
            break;
        case 3:
            idata[2]++;
            break;
        case 4:
            idata[3]++;
            break;
        case 5:
            idata[4]++;
            break;
        case 6:
            idata[5]++;
            break;
        }
        irun++;
    }
    for (int i = 0;i <= 5;i++)
    {
        printf("%d 點出現 %d 次,機率為 %4.3f\n", i + 1, idata[i], (float)idata[i] / 100000);
    }
    system("pause");
    return 0;
}