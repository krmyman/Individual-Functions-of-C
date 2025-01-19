#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int data[10] = { 0 }, temp, min;
    srand((unsigned)time(NULL));
    for (int i = 0;i <= 9;i++)
        data[i] = rand() % 1000;
    printf("交換前:");
    for (int i = 0;i <= 8;i++)
        printf("%4d", data[i]);
    printf("\n");
    for (int i = 0;i <= 9;i++)
    {
        min = i;
        for (int j = i + 1;j <= 9;j++)
        {
            if (data[min] > data[j])min = j;
        }
        temp = data[min];
        data[min] = data[i];
        data[i] = temp;
    }
    printf("交換後:");
    for (int i = 0;i <= 8;i++)
        printf("%4d", data[i]);
    printf("\n");
    system("pause");
    return 0;
}