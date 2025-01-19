#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	float fx;
	double dx, dxf,dxf1;
	fx = 0.12345678901234567890;
	dx = 0.12345678901234567890;
	printf("fx = %1.20f\n", fx);
	printf("dx = %1.20f\n", dx);
	fx = 1.0 / 3.0;
	dxf = 1.0f / 3.0f;
	dx = 1.0 / 3.0;
	printf("fx = %1.20f \n", fx);
	printf("dxf = %1.20f \n", dxf);
	printf("dx = %1.20f \n", dx);
	dxf1 = 1.0f / 3.0;
	printf("dxf1 = %1.20f \n ", dxf1);
	system("pause"); return(0);
}
