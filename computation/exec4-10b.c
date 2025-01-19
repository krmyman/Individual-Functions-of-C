#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    char input1[20],input2[20];
    int compare=0;
    printf("輸入第一個字串：");
    scanf("%s",input1);
    rewind(stdin);
    printf("輸入第二個字串：");
    scanf("%s",input2);
    compare = strcmp(input1,input2);
    if (compare>0)
    {
        printf("第一個字串>第二個字串\n");
    }
    else if (compare < 0)
    {
        printf("第一個字串<第二個字串\n");
    }
    else
    {
        printf("第一個字串=第二個字串\n");
    }
    system("pause");
    return 0;
}