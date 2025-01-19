#include <stdio.h>
#include<stdlib.h>
#define M_Name "Pride and Perjudice" 

int main(void)
{
	printf("%s \n", M_Name);
	printf("%-19.5s \n", M_Name);
	printf("%19.5s \n", M_Name);
	system("pause");
	return 0;
}