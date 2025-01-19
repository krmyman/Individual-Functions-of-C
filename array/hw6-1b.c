#include<stdio.h>
#include<stdlib.h>
int main()
{
    int isum2 = 0, isum3 = 0, isum5 = 0;
    for (int i = 1;i <= 1000;i++)
    {
        if (!(i % 2))
            isum2 += i;
        if (!(i % 3))
            isum3 += i;
        if (!(i % 5))
            isum5 += i;
    }
    printf("1到1000中所以有2倍數總和=%d\n", isum2);
    printf("1到1000中所以有3倍數總和=%d\n", isum3);
    printf("1到1000中所以有5倍數總和=%d\n", isum5);
    system("pause");
    return 0;
}