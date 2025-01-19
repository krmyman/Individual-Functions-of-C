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
    printf("你要印出幾個*:");
    scanf("%d",&data);
    while(data!=0)
    {
        Xprint(data);
        printf("你要印出幾個*:");
        scanf("%d",&data);
    }
    system("pause");
    return 0;
}
