#include<stdio.h>
#include<stdlib.h>
enum month{January,February,March,April,May,June,July,August,September,October,November,December} themonth;
int main()
{
    char chmonth[][12] = {"一月","二月","三月","四月","五月","六月","七月","八月","九月","十月","十一月","十二月"};
    char enmonth[][12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("英文    中文\n");
    for(themonth = January;themonth<=December;themonth++)
    {
        printf("%-10s %s\n",enmonth[themonth],chmonth[themonth]);
    }
    return 0;
}