#include<stdio.h>
#include<stdlib.h>
int main()
{
    int id = 3, iary[20];
    iary[0] = 1;
    for (int i = 1;i <= 14;i++)
    {
        iary[i] = iary[0] + id * (i);
        printf("a%-2d = %2d\n", i, iary[i - 1]);
    }
    system("pause");
    return 0;
}