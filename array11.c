#include<stdio.h>
int main()
{
    int i,j,numberOFROWS,numberOFC0LS;
    int a[100][100],b[100][100],result[100];

    printf("enter the number of rows and cols:");
    scanf("%d %d",&numberOFROWS,&numberOFC0LS);

    printf("enter element for matrix a= \n");
    for(i=0;i<numberOFROWS;i++)
    {
        for(j=0;j<numberOFC0LS;j++)
        {

            printf("[%d] [%d]=",i,j);
            scanf(" %d",&a[i][j]);
        }
        printf("\n");
    }

    printf("enter element for matrix b=\n");
    for(i=0;i<numberOFROWS;i++)
    {
        for(j=0;j<numberOFC0LS;j++)
        {
            printf("[%d][%d]=",i,j);
            scanf(" %d",&b[i][j]);
        }
        printf("\n");
    }

    printf("a=\n");
    for(i=0;i<numberOFROWS;i++)
    {
        printf("\t");
        for(j=0;j<numberOFC0LS;j++)
        {
            printf(" %d",a[i][j]);
        }
         printf("\n");
    }



    printf("b=\n");
    for(i=0;i<numberOFROWS;i++)
    {
        printf("\t");
        for(j=0;j<numberOFC0LS;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

