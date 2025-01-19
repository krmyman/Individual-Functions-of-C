#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int a = 0, b = 0, c = 0, x = 0, y = 0;
	printf("請輸入a的值: ");
	scanf("%d", &a);
	printf("請輸入b的值: ");
	scanf("%d", &b);
	printf("請輸入c的值: ");
	scanf("%d", &c);
	printf("請輸入x的值: ");
	scanf("%d", &x);
	y = a * pow(x, 2) + b * x + c;
	printf("y = ax^2 + bx + c = %d \n", y);
	system("pause");
	return(0);
}
