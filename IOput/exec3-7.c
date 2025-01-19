#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(void)
{

	int ia, ib;
	printf("輸入兩個整數:"); scanf("%d%d", &ia, &ib);
	printf("輸入的兩個整數數值是: %d %d \n", ia, ib);
	printf("輸入兩個整數 請用,隔開數值: "); scanf("%d,%d", &ia, &ib);
	printf("輸入的兩個整數數值是: %3d %d \n", ia, ib);
	printf("輸入兩個整數 請用＃隔開數值: "); scanf("%d#%d", &ia, &ib);
	printf("輸入的兩個整數數值是: %3d %d \n", ia, ib);
	printf("輸入兩個整數 請用＠隔開數值: "); scanf("%d@%d", &ia, &ib);
	printf("輸入的兩個整數數值是: %3d %d \n", ia, ib);
	printf("輸入兩個整數 請用$隔開數值: "); scanf("%d$%d", &ia, &ib);
	printf("輸入的兩個整數數值是: %3d %d \n", ia, ib);
	system("pause");
	return(0);


}