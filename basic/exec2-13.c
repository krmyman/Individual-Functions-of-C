#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//char cBell = '\a';	/* Àx¦s Bell ¦r¤¸ */
	//char cNL = '\n';	/* Àx¦s´«¦æ \n ¦r¤¸ */
	//char cBS = '\b';	/* Àx¦s­Ë°hÁä */
	char cBell = '\a';
	char cNL = '\n';
	char cBS = '\b';
	char cTab = '\t';
	char cR = '\r';
	printf("發出一個聲音 %c %c", cBell, cNL);
	printf("輸出了AB但只有AB%cX覆蓋了 B\n", cBS);
	printf("會有跳格AB%cXY\n", cTab);
	printf("會有歸位AB%cXY\n", cR);
	printf("輸出反斜線 \\ \n");		// ¿é¥X¤Ï±×½u
	printf("\"這行字被雙引號括住\"\n");		// ¿é¥XÂù¤Þ¸¹
	printf("\'這行字被單引號括住\'%c", cNL); // ¿é¥X³æ¤Þ¸¹
	system("pause");
	return(0);
}
