#define _CRT_SECURE_NO_WARNINGS
#define poundtokilo 0.454
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float pound = 0.0, kilo = 0.0;
	printf("請問需要多少磅換成公斤?");
	scanf("%f", &pound);
	printf("%f 磅為 %f 公斤 \n", pound, pound * 0.454);
	printf("請問需要多少公斤換成磅?");
	scanf("%f", &kilo);
	printf("%f 公斤為 %f 磅\n", kilo, kilo / 0.454);
	system("pause");
	return(0);


}