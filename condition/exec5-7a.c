#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iage;
    printf("輸入年紀:");
    scanf("%d", &iage);
    if (iage >= 65)
        printf("老年人\n");
    else
    {
        if (iage >= 40)
            printf("中年人\n");
        else
        {

            if (iage >= 30)
                printf("壯年人\n");
            else
            {
                if (iage >= 20)
                    printf("年輕人\n");
                else
                {
                    if (iage >= 10)
                        printf("少年\n");
                    else
                        printf("小孩\n");
                }
            }
        }
    }
    system("pause");
    return 0;
}