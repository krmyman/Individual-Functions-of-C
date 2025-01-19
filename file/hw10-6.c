#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE* pfile;
    char cDate[5], cTel[20], cBuf[200], ctime[2], csex, cpeople[2], cname[10];
    if ((pfile = fopen("hw10-6.txt", "r+")) == NULL) {
        printf("檔案無法開啟");
        return(0);
    } // 開啟更新的檔案
    while (!feof(pfile)) { // 顯示檔案的內容
        fgets(cBuf, 80, pfile); printf("%s", cBuf);
    }
    rewind(pfile); //讀寫頭回到檔案頭
    printf("\n輸入訂位者姓名:");
    gets(cname);
    printf("\n定位是<1>先生還是<2>小姐:");
    scanf("%c", &csex);
    rewind(stdin);
    printf("\n輸入訂位人數:");
    gets(cpeople);
    printf("\n輸入提早到達的時間:");
    gets(ctime);
    printf("\n輸入可取消的天數:");
    gets(cDate);
    printf("\n輸入電話:");
    gets(cTel);
    fputs(cname, pfile);
    if (csex == '1')
        fputs("先生", pfile);
    else if (csex == '2')
        fputs("女士", pfile);
    // 將讀寫頭指向位置,中文是兩個Bytes//要計算位址
    fseek(pfile, 34, SEEK_SET);
    fputs(cpeople, pfile);
    // 將讀寫頭指向電話的位置
    fseek(pfile, 64, SEEK_SET);
    fputs(ctime, pfile);
    fseek(pfile, 112, SEEK_SET);
    fputs(cDate, pfile);
    fseek(pfile, 143, SEEK_SET);
    fputs(cTel, pfile);
    rewind(pfile); //讀寫頭回到檔案頭
    while (!feof(pfile)) { // 顯示檔案的內容
        fgets(cBuf, 200, pfile); printf("%s", cBuf);
    }
    fclose(pfile);return(0); // 關閉檔案
}