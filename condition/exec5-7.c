#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iGrade;
    printf("請輸入成績:");
    scanf("%d", &iGrade);
    if (iGrade >= 90)
        printf("優等\n");
    else
    {
        if (iGrade >= 80)
            printf("甲等\n");
        else
        {

            if (iGrade >= 70)
                printf("乙等\n");
            else
            {
                if (iGrade >= 60)
                    printf("丙等\n");
                else
                    printf("丁等\n");
            }
        }
    }
    system("pause");
    return 0;
}