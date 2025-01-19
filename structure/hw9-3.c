//指標函數配上enum
#include<stdio.h>
#include<stdlib.h>
typedef char name[10];

struct data {
    name dname;
    char brown[10];
    int date;
    enum blood { A, B, O, AB } bloodType;
} data = {};

char get();
void print(char*);

int main() {
    char bloodType;
    bloodType = get();
    print(&bloodType);
    return 0;
}

char get() {
    char b;
    printf("輸入姓名:");
    scanf("%s", data.dname);

    printf("輸入出生地:");
    scanf("%s", data.brown);

    printf("輸入出生年:");
    scanf("%d", &data.date);

    printf("輸入血型 (A, B, O, AB): ");
    scanf(" %c", &b); // Notice the space before %c to consume leftover newline

    return b;
}

void print(char* printblood) {
    printf("姓名: %s\n", data.dname);
    printf("出生地: %s\n", data.brown);
    printf("出生年: %d\n", data.date);

    if (*printblood == 'A') {
        printf("血型: A\n");
    } else if (*printblood == 'B') {
        printf("血型: B\n");
    } else if (*printblood == 'O') {
        printf("血型: O\n");
    } else {
        printf("血型: AB\n");
    }
}
