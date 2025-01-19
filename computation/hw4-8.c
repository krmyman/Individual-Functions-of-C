#include<stdio.h>
#include<stdlib.h>

void Xprint(int x)
{
    while(x!=0)
    {
        printf("*");
        x--;
    }
    printf("\n");
}

int main()
{
    int data;
    printf("請輸入要印出的*個數:");
    scanf("%d",&data);
    while(data!=0)
    {
        Xprint(data);
        printf("請輸入要印出的*個數:");
        scanf("%d",&data);
    }
    system("pause");
    return 0;
}
