#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ix;
    printf("請輸入一個數字:");
    scanf("%d", &ix);
    while (ix == 1 || ix == 2 || ix == 3)
    {
        switch (ix)
        {
        case 1:
            printf("你出的是剪刀\n");
            break;
        case 2:
            printf("你出的是石頭\n");
            break;
        case 3:
            printf("你出的是布\n");
            break;
        }
        printf("請輸入一個數字:");
        scanf("%d", &ix);
    }
    printf("遊戲結束\n");
    system("pause");
    return 0;

}