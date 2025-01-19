#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int ix;

	printf("請輸入一個十進位數:");
	scanf("%d", &ix);
	printf("10進制          8進制           16進制 \n");
	printf("---------------------------------------- \n");
	printf("%-14d&%#-14o%#-14x \n", ix, ix, ix);
	system("pause");
	return 0;
}