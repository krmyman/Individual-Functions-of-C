#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int A[10], B[10], irun = 0, imin, rei, rej;
    float t;
    srand((unsigned)time(NULL));
    while (irun <= 9)
    {
        t = (float)rand() / RAND_MAX * 900 + 99;
        A[irun] = (int)t;
        t = (float)rand() / RAND_MAX * 900 + 99;
        B[irun] = (int)t;
        irun++;
    }
    irun = 0;
    while (irun <= 9)
    {
        if (!(irun))
            printf("陣列A的內容:");
        printf("%3d ", A[irun]);
        if (irun == 9)
            printf("\n");
        irun++;
    }
    irun = 0;
    while (irun <= 9)
    {
        if (!(irun))
            printf("陣列B的內容:");
        printf("%3d ", B[irun]);
        if (irun == 9)
            printf("\n");
        irun++;
    }
    for (int i = 0;i <= 9;i++)
    {
        for (int j = 0;j <= 9;j++)
        {
            if (!i)
                imin = abs(A[i] - B[j]);//絕對值
            if (imin >= abs(A[i] - B[j]))
            {
                imin = abs(A[i] - B[j]);
                rei = i;
                rej = j;
            }
        }
    }
    printf("abs<A[%d]-B[%d]> = abs<%d - %d> = %d 為最小值\n", rei, rej, A[rei], B[rej], abs(A[rei] - B[rej]));
    system("pause");
    return 0;
}