//指標預設陣列內容
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  A[3][3] = { 0 }, B[3][3] = { 0 }, C[3][3] = { 0 }, * ptr;
    ptr = &A[0][0];
    for (int i = 0;i < 3;i++)
    {
        *(ptr + i * 3 + i) = 1;
        *(*(B + i) + i) = 1;
        *(C[i] + i) = 1;
    }
    for (int i = 0;i < 3;i++)
    {
        printf("陣列%c的內容\n",65+i);
        for (int j = 0;j < 3;j++)
        {
            for(int k=0;k<3;k++)
            {
                if(j==0)
                    printf("%2d",A[j][k]);
                else if(j==1)
                    printf("%2d",B[j][k]);
                else if(j==2)
                    printf("%2d",C[j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}