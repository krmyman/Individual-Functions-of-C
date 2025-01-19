#include<stdio.h>
#include<stdlib.h>
int main()
{
    int ary1[2][3] = {0};
    int ary2[2][3] = {1};
    int ary3[2][3] = {1,2,3,4};
    int ary4[2][3] = {{1},{2}};
    int ary5[2][3] = {{1,3,5},{2,4}};
    int ary6[2][3] = {1,3,5,2,4,-1};
    int i,j;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("ary1[%d][%d]=%d,",i,j,ary1[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------\n");
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("ary2[%d][%d]=%d,",i,j,ary2[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("ary3[%d][%d]=%d,",i,j,ary3[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------\n");
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("ary4[%d][%d]=%d,",i,j,ary4[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------\n");
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("ary5[%d][%d]=%d,",i,j,ary5[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------\n");
        for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("ary6[%d][%d]=%d,",i,j,ary6[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------\n");
}