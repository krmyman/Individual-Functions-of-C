#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"delc.h"
int main()
{
    int ipwin=0, icwin=0, ret;
    int iplayer = 0, icomp = 0;
    srand((unsigned)time(NULL));
    while ((ipwin <= 2) && (icomp <= 2))
    {
        icomp = rand() % 3 + 1;
        printf("1.剪刀 2.石頭 3.布 你出的是：\n");
        scanf("%d", &iplayer);
        if ((iplayer >= 1 && iplayer <= 3))
        {
            ret = WinLoss(icomp, iplayer);
            ShowMsg(icomp, iplayer, ret);
            if (ret == 1)ipwin++;
            else if (ret == -1)icwin++;
            printf("目前為止你贏 %d 次,電腦贏 %d 次\n", ipwin, icwin);
        }
        else
        {
            printf("你出錯了,請重出！\n");
            rewind(stdin);
        }
    }
    if (ipwin == 3)printf("恭喜你贏電腦！\n");
    else printf("這次輸了沒關係 下次繼續努力！\n");
    system("pause");
    return 0;
}