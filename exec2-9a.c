#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int x, y, z;
	short si;
	x = pow(2, 8);
	y = pow(2, 16);
	z = pow(2, 32);
	si = 32767;
	printf("char. 1個位元組(one bytes), 1*8=8個位元(8 bit):2^8=%d\n", x);
	printf("short. 2個位元組(two bytes), 2*8=16個位元(16 bit):2^16=%d\n", y);
	printf("char. 4個位元組(four bytes), 4*8=32個位元(32 bit):2^32=%d\n", z);
	printf("si : %d\n ", si);
	si = 32768;
	printf("32768 overflow , si : %d \n ", si);
	si = 32769;
	printf("32769 overflow , si : %d \n ", si);
	si = 32770;
	printf("32770 overflow , si : %d \n ", si);
	si = -32769;
	printf("-32769 overflow , si : %d \n ", si);
	si = -32770;
	printf("-32770 overflow , si : %d \n ", si);
	si = -32771;
	printf("-32771 overflow , si : %d \n ", si);
	system("pause");
	return(0);
}