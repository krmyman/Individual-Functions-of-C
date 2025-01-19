#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	char Cask1[20] = "輸入你的姓名:";
	char Cask2[20] = "輸入你的學號:";
	char Cname[20];
	char Cid[20];
	printf("%s", Cask1);
	scanf("%s", &Cname);
	puts(Cask2);
	scanf("%s", &Cid);
	printf("你的姓名: %s 你的學號: %s \n", Cname, Cid);
	printf("%s", Cask1);
	scanf("%s", &Cname);
	system("pause");
	return 0;


}