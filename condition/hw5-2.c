#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    float ft;
    int ia = 0, ib = 0, ic = 0;
    srand((unsigned)time(NULL));
    ft = (float)rand() / RAND_MAX;//0<=ft<=1
    ia = (int)(ft * 900 + 100);
    ft = (float)rand() / RAND_MAX;//0<=ft<=1
    ib = (int)(ft * 900 + 100);
    ft = (float)rand() / RAND_MAX;//0<=ft<=1
    ic = (int)(ft * 900 + 100);
    printf("隨機產生三個數: ia=%d, ib=%d, ic=%d\n", ia, ib, ic);
    if (ia < ib && ia < ic)
        printf("最小數為ia = %d\n", ia);
    else if (ib < ia && ib < ic)
        printf("最小數為ib = %d\n", ib);
    else
        printf("最小數為ic = %d\n", ib);
    system("pause");
    return 0;
}