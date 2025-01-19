#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x, y, z, t; // t �Ω�洫�L�{���Ȧs
	printf("輸入三個整數 x , y , z : ");
	scanf("%d%d%d", &x, &y,&z);
	printf("交換前: x = %d, y = %d,z = %d\n", x, y, z);
	t = x; x = y; y = z; z = t; // �洫����ܼƤ��e
	printf("交換後: x = %d, y = %d,z = %d\n", x, y, z);
	system("pause");
	return(0);
}
