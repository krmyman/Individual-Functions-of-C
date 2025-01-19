//小到大排序
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[6] = { 23,31,3,19,54,12 };
    int min, temp = 0;
    for (int i = 0;i <= 5;i++)
    {
        printf("%3d", A[i]);
    }
    printf("\n");
    for (int i = 0;i < 5;i++)
    {
        min = i;
        for (int j = i + 1;j < 6;j++)
        {
            if (A[min] > A[j])min = j;
            printf("i=%d, j=%d, min<before>=%d, min<after>=%d,", i, j, min, min);
            for (int k = 0;k <= 5;k++)
                printf("%3d", A[k]);
            printf("\n");
        }
        temp = A[min];
        A[min] = A[i];
        A[i] = temp;
        printf("第%d和%d交換:", i, min);
        for (int k = 0;k <= 5;k++)
            printf("%3d", A[k]);
        printf("\n-------------------------------------------------------\n");
    }
    system("pause");
    return 0;
}