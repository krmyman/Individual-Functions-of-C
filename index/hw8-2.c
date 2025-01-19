//指標回傳值
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 10
void NumberGen();	// �쫬�ŧi
double Search(int, double*);	// �쫬�ŧi
int iNum[NUM] = { 0 };	// �ŧi���쪺�@���}�C
double ret;
void NumberGen() {
    int i;
    srand((unsigned)time(NULL)); // �]�w�üƲ��ͪ��_�I, ����@���Y�i
    for (i = 0; i < NUM; i++) iNum[i] = 1 + (int)(50 * (float)rand() / RAND_MAX);
}
double Search(int target, double* ptr) {
    *ptr = (double)-1;
    for (int i = 0; i < NUM; i++)
        if (iNum[i] == target) *ptr = (double)i;
}
int main(void)
{
    int iGuess;
    NumberGen();
    for (int i = 0;i < 10;i++)
    {
        printf("%d ", iNum[i]);
    }
    printf("\n");
    do {
        printf("輸入1-50之間猜測的數: ");
        scanf("%d", &iGuess);
        Search(iGuess, &ret);
        printf("%lf\n", ret);//輸出double引數
        if (ret >= 0) printf("輸入的數儲存在陣列的第 %1.0lf 的位置\n", ret);
        else printf("你輸入的數不存在\n");
    } while (ret == -1);
    system("pause"); return(0);
}