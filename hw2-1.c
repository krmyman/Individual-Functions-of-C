#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159

int main(void)
{
	float Radius = 0;//�b�| �p��P���P���n
	printf("請輸入圓的半徑:");
	scanf("%f", &Radius);
	printf("此圓周長為 = %f \n", Radius * 2 * pi);
	printf("此圓面積為 = %f \n", pow(Radius, 2) * pi);
	system("pause");
	return(0);

}