#include<stdio.h>
#include<stdlib.h>
int main()
{
    int isum = 0;
    for (int i = 3; i <= 999;i += 3)
    {
        isum += i;
    }
    printf("3+6+9+12+15+....+999 = %d\n", isum);
    system("pause");
    return 0;
}