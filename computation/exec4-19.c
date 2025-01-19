#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int ix=1, sum=0;
    while(sum<150)
    {
        sum += ix;
        printf("從1累加到 %d = %d \n",ix,sum);
        ix++;
    }
    ix--;
    printf("必須由1累加到%d,才會大於%d \n",ix,sum);
    system("pause");
    return 0;
}