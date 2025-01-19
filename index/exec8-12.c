//指標函式
#include<stdio.h>
int *sum(int);
int *sum(int n)
{
    int m=0;
    for(int x=1;x<=n;x++) m+=x;
    return &m;
}
int main()
{
    int n,*total;
    printf("輸入 n:");
    scanf("%d",&n);
    total = sum(n);
    printf("1+2+...+%d = %d\n",n,*total);
    return 0;
}