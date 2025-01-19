//巢狀結構顯示
#include<stdio.h>
#include<stdlib.h>
struct basicinfo
{
    char Name[20];
    char mail[30];
    char sex;
    int  Age;
};
struct studentinfo
{
    char ID[20];
    int grade;//年級
    struct basicinfo basic;
}student = { "1010101",5,"John","John125@gmail.com",'M',2001 };
struct teacherinfo
{
    char ID[20];
    int seniority;//資歷
    struct basicinfo basic;
}teacher = { "T3939889",25,"Mary","MaryWang992@gmail.com",'F',1987 };
int main()
{
    printf("學生姓名:%s 出生年:%d\n", student.basic.Name, student.basic.Age);
    printf("學號:%s 年級:%d\n", student.ID, student.grade);
    printf("Email:%s 性別:%c\n", student.basic.mail, student.basic.sex);
    printf("-----------------------------------------\n");
    printf("老師姓名:%s 出生年:%d\n", teacher.basic.Name, teacher.basic.Age);
    printf("學號:%s 年資:%d\n", teacher.ID, teacher.seniority);
    printf("Email:%s 性別:%c\n", teacher.basic.mail, teacher.basic.sex);
    return 0;
}
