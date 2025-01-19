#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h> // 用於 open()
#include <unistd.h> // 用於 read() 和 close()

int main()
{
    int file;
    char readch;
    int sum[26] = {0};

    // 打開檔案
    if ((file = open("story.txt", O_RDONLY)) < 0)
    {
        perror("檔案無法開啟");
        return 1;
    }

    // 逐字讀取檔案內容
    while (read(file, &readch, 1) > 0)
    {
        printf("%c", readch);
        if (readch >= 'a' && readch <= 'z') 
        {
            sum[readch - 'a']++;
        } 
        else if (readch >= 'A' && readch <= 'Z') 
        {
            sum[readch - 'A']++;
        }
    }

    // 關閉檔案
    close(file);

    // 輸出統計結果
    for (int i = 0; i < 26; i++)
    {
        printf("字母 %c 和 %c 出現 %2d 次\n", i + 'a', i + 'A', sum[i]);
    }

    return 0;
}