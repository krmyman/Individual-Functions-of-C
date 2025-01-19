#include<stdio.h>
#include<stdlib.h>
typedef char name[10];
struct data
{
    name dname;
    char brown[10];
    int date;
    enum blood{A,B,O,AB}blood;
}data= {"Frank","台北市",1995,O};
int main()
{
    printf("姓名:%s\n出生地:%s\n出生年:%d\n",data.dname,data.brown,data.date);
    if(data.blood==2)
    printf("血型:%c\n",'O');
    return 0;
}

