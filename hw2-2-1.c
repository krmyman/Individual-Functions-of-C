#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
#define FEETTOCM 30.48

int main(void)
{
	float Receive_cm = 0.0, Receive_feet = 0.0;
	printf("請問需要多少英呎轉換成公分 : ");
	scanf("%f", &Receive_feet);
	printf("%f 英呎為 %f 公分 \n", Receive_feet,Receive_feet*FEETTOCM);
	printf("請問需要多少公分轉換成英呎 : ");
	scanf("%f", &Receive_cm);
	printf("%f 公分為 %f 英呎 \n", Receive_cm, Receive_cm/FEETTOCM);
	system("pause");
	return(0);

}