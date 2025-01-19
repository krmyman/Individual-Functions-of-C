//驗證次方
#include<stdio.h>
#include<stdlib.h>
int ipower(int, int);
int main()
{
    int x, n;
    printf("請輸入x\n");
    scanf("%d", &x);
    rewind(stdin);
    printf("請輸入n(必須大於1)\n");
    scanf("%d", &n);
    if (!(ipower(x, n)))
    {
        printf("%d 不是 %d 的次方\n", x, n);
    }
    else
    {
        printf("%d 是 %d 的 %d 次方\n", x, n, ipower(x, n));
    }
    system("pause");
    return 0;
}
int ipower(int x, int n)
{
    int run = 0, rerun = 0, rex = x, ren = 1;
    while (x >= n)
    {
        x /= n;
        run++;
    }
    //run--;
    rerun = run;
    while (run > 0)
    {
        ren *= n;
        run--;
    }
    if (rex == ren)
        return rerun;
    else
        return 0;
}