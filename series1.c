#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter the last number of the series = ");
    scanf("%d",&num);
    printf("1 + 2 + 3 + 4 + ........ + %d",num);

    for(i=1;i<=num;i=i+1)
    {
        sum=sum+i;
    }
    printf("=%d\n",sum);

}
