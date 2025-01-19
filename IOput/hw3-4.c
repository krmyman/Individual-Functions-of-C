#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	float ia=0.0, ib=0.0, ic=0.0;
	printf("連續輸入三個浮點數 : \n");
	scanf("%f%f%f", &ia, &ib, &ic);
	printf("%12.1f\n", ia);
	printf("%13.2f\n", ib);
	printf("%14.3f\n", ic);
	system("pause");
	return(0);


}
