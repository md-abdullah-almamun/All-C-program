#include<stdio.h>
int main()
{
    int i,j;
    int a[3][4],b[3][4];

    printf("enter element for matrix a=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4; j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf(" %d",&a[i][j]);

        }
        printf("\n");
    }
    printf("a=");
    for(i=0;i<4;i++)
    {
        printf("\t");
        for(j=0;j<4; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }

    printf("enter element for matrix b=\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);

        }
        printf("\n");
    }

    printf("b=");

        for(i=0;i<3;i++)
        {
            printf("\t");
            for(j=0;j<4;j++)
            {
             printf(" %d",a[i][j]) ;
            }
            printf("\n");
        }

    return 0;
}
