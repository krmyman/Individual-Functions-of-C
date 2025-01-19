#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char ch;
    int iLower = 0, iUpper = 0, iSpace = 0, iDigit = 0, iPunct = 0;
    printf("輸入一段英文句子,以\\n為結尾\n");
    while ((ch = getchar()) != '\n')
    {
        if (islower(ch))
        {
            putchar(toupper(ch));
            iLower++;
        }
        else if (isupper(ch))
        {
            putchar(tolower(ch));
            iUpper++;
        }
        else
        {
            if (isdigit(ch))iDigit++;//數字字元
            else if (isspace(ch))iSpace++;//空白字元
            else if (ispunct(ch))iPunct++;//標點符號
            putchar(ch);//其他字元
        }
    }
    printf("\n小寫英文字母有: %4d 個\n", iLower);
    printf("大寫英文字母有: %4d 個\n", iUpper);
    printf("     數字字元有: %4d 個\n", iDigit);
    printf("     空白字元有: %4d 個\n", iSpace);
    printf("     標點符號有: %4d 個\n", iPunct);
    system("pause");
    return 0;
}