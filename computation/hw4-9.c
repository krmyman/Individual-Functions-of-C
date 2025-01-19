#include<stdio.h>
#include<stdlib.h>

int sum(int x)
{
    int total = 0;
    while (x >= 0)
    {
        total += x;
        x--;
    }
    return total;
}

int main()
{
    printf("1+2+.....+100 = %10d\n", sum(100));
    printf("1+2+....+1000 = %10d\n", sum(1000));
    printf("1+2+...+10000 = %10d\n", sum(10000));
    printf("1+2+...+50000 = %10d\n", sum(50000));
    system("pause");
    return 0;
}