#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int ix=1,sum2=0,sum3=0,sum5=0;
    while(ix<=10000)
    {
        if(!(ix%2))sum2+=ix;
        if(!(ix%3))sum3+=ix;
        if(!(ix%5))sum5+=ix;
        ix++;
    }
    printf("1 到 10000 之間, 2的倍數總和是: %d \n",sum2);
    printf("1 到 10000 之間, 3的倍數總和是: %d\n",sum3);
    printf("1 到 10000 之間, 5的倍數總和是: %d\n",sum5);
    system("pause");
    return 0;
}