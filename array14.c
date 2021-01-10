#include<stdio.h>
int main()
{
    int first[100][100],second[100][100],result[100][100],i,j,r1,r2,c1,c2,k,sum=0;

    printf("enter rows and column for first matrix...");
    scanf("%d %d",&r1,&c1);

    printf("enter rows and column for second matrix... ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("error !! column of matrix not equal row of second.....\n");

        printf("enter rows and column for first matrix...");
        scanf("%d %d",&r1,&c1);

        printf("enter rows and column for second matrix... ");
        scanf("%d %d",&r2,&c2);
    }
    printf("enter element for first matrix...\n");
    for(i=0;i<r1;i++)
    {

        for(j=0;j<c1;j++)
        {
            printf("first[%d][%d]..",i,j);
            scanf("%d",&first[i][j]);

        }
    }
    printf("enter element for second matrix...\n");
    for(i=0;i<r2;i++)
    {

        for(j=0;j<c2;j++)
        {
             printf("second[%d][%d]..",i,j);
            scanf("%d",&second[i][j]);

        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
              sum=sum+first[i][j]*second[i][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }



    printf("\n\nfirst matrix=\n");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {
            printf(" %d",first[i][j]);

        }
        printf("\n");
    }

    printf("\n\nsecond matrix=\n");
    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf(" %d",second[i][j]);

        }
        printf("\n");
    }
    printf("\n\nResult matrix=\n");
    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf(" %d",result[i][j]);

        }
        printf("\n");

    }
    return 0;
}
