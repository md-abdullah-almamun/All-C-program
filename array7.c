#include<stdio.h>
int main()
{
    int a[3][4]={{1,2,3,4},{9,8,7,6},{5,6,7,8}},i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
