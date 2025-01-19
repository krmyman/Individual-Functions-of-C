#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a, b=20, c=30;
    a = b++ + ++c;printf("x=%d, b=%d, c=%d\n",a,b,c);
    a = b-- - --c;printf("x=%d, b=%d, c=%d\n",a,b,c);
    a += b++ + --c;printf("x=%d, b=%d, c=%d\n",a,b,c);
    a -= b-- + ++c;printf("x=%d, b=%d, c=%d\n",a,b,c);
    system("pause");
    return 0;
}