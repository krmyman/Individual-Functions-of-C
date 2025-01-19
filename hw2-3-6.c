#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

	float a = 0.0, b = 0.0, t = 0.0;
	printf("請輸入a值: ");
	scanf("%f", &a);
	printf("請輸入b值: ");
	scanf("%f", &b);
	t = pow(pow(a, 2) + pow(b, 2), 0.5);
	printf("t = (a ^ 2 + b ^ 2) ^ 0.5 = %f \n", t);
	system("pause");
	return(0);


}