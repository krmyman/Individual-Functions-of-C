#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr, sum = 0;
    if ((ptr = (int*)malloc(3 * sizeof(int))) == NULL)//配置三個整數空間
        printf("記憶體空間不足\n");return 0;
    *ptr = 10;
    *(ptr + 1) = 24;
    *(ptr + 2) = 213;
    for (int i = 0;i < 3;i++)
    {
        printf("*ptr+%d=%d\n", i, *(ptr + i));
        sum += *(ptr + i);
    }
    printf("sum=%d\n", sum);
    free(ptr);//釋放由ptr指向的空間
    system("pause");
    return 0;
}