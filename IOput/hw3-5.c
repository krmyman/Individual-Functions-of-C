#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define chr_ch "國文成績: "
#define chr_ma "數學成績: "
#define chr_en "英文成績: "
#define chr_to "總成績: "
#define chr_av "平均: "

int main(void)
{
	float ch_score = 0.0, ma_score = 0.0, en_score = 0.0,ftotal=0.0,faverage=0.0;
	printf("輸入%c", chr_ch); scanf("%f", &ch_score);
	printf("輸入%c", chr_ma); scanf("%f", &ma_score);
	printf("輸入%c", chr_en); scanf("%f", &en_score);
	ftotal = ch_score + ma_score + en_score;
	faverage = ftotal / 3.0f;
	printf("===========================\n");
	printf("%14s %6.2f\n", chr_ch, ch_score);
	printf("%14s %6.2f\n", chr_ma, ma_score);
	printf("%14s %6.2f\n", chr_en, en_score);
	printf("===========================\n");
	printf("%14s %6.2f\n", chr_to, ftotal);
	printf("%14s %6.2f\n", chr_av, faverage);
	system("pause");
	return 0;

}