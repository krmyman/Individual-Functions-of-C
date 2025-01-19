#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iNum = 0, iSum = 0;
    printf("輸入需要相加的數（非數字表示結束）:");
    while (scanf("%d", &iNum) == 1)
    {
        iSum += iNum;
        printf("輸入需要相加的數:");
    }
    printf("累加的結果為 %d\n", iSum);
    system("pause");
    return 0;
}