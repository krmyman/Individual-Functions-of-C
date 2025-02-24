//結構排序
#include <stdio.h>
#include <string.h>
struct data {
    char name[10];
    int ch;
    int en;
    int math;
    float fave;
} data[5] = {
    {"Brown", 77, 87, 83, 0},
    {"Frank", 88, 74, 91, 0},
    {"Mary", 87, 93, 79, 0},
    {"John", 83, 73, 67, 0},
    {"Alison", 62, 71, 81, 0}
};

int main() {
    int max;
    struct data temp;

    // 計算平均成績
    for (int i = 0; i < 5; i++) {
        data[i].fave = (float)(data[i].ch + data[i].en + data[i].math) / 3.0;
    }

    // 排序（依平均成績由高到低）
    for (int i = 0; i < 5; i++) {
        max = i;
        for (int j = i + 1; j < 5; j++) {
            if (data[max].fave < data[j].fave) max = j;
        }
        // 交換資料
        temp = data[i];
        data[i] = data[max];
        data[max] = temp;
    }

    // 輸出結果
    for (int i = 0; i < 5; i++) {
        if (!i) printf("  姓名       國文     英文     數學      平均成績\n");
        printf("%-10s%8d%8d%8d%14.2f\n", data[i].name, data[i].ch, data[i].en, data[i].math, data[i].fave);
    }

    return 0;
}
