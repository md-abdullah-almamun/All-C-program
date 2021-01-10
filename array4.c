#include<stdio.h>
int main()
{
    int a[5],sum=0,i;
    printf("enter any five number =");

    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        sum=sum+a[i];

    }

    printf("the sum = %d\n",sum);

    printf("the average= %.2f\n",(float)sum/5);
    return 0;
}
