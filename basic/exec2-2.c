#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int x=0;
	float y=5;
	printf("y= %d \n", y);
	x = y;
	printf("x=y, x=%d \n", x);
	x = x -1 ;
	printf("x = x -1, x=%d \n", x);
	x = 3 * x + 2;
	printf("x=3*x+2, x=%d \n", x);
	x = x * y;
	printf("x=x*y, x=%d \n", x);
	x = x + y * 3 - 1;
	printf("x=x+y*3-1, x=%d \n", x);
	system("pause");
	return(0);

}
