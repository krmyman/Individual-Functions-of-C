//大到小排序
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[6] = { 23,31,3,19,54,12 };
    int temp = 0, max;
    for (int i = 0;i <= 5;i++)
    {
        max = i;
        for (int i = 0;i <= 5;i++)
            printf("%3d", A[i]);
        printf("\n");
        for (int j = i + 1;j <= 5;j++)
        {
            if (A[max] < A[j])max = j;
        }
        temp = A[max];
        A[max] = A[i];
        A[i] = temp;
    }
    system("pause");
    return 0;
}