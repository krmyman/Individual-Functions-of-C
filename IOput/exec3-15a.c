#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ix = 0;
	char ch;
	printf("請輸入一個整數:");
	scanf("%d", &ix);
	fflush(stdin);
	rewind(stdin);
	printf("請輸入一個字元:");
	ch = getchar();
	ch = getchar();
	printf("ch = %d , ix = %d \n", ch, ix);
	system("pause");
	return(0);


}