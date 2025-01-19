#include<stdio.h>
#include<stdlib.h>
int main()
{
    for (int i = 1;i <= 12;i++)
    {
        if (!(i % 3)) continue;
        while (1)
        {
            printf("%d break 前\n", i);
            break;
            printf("%d break 後\n", i);
        }
    }
    system("pause");
    return 0;
}