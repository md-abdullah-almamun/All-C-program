#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter the last series number :");
    scanf("%d",&num);
    printf("1 + 3 + 5 .........%d",num);

    for(i=1;i<=num;i=i+2)
    {
        sum=sum+i;

    }
    printf("=%d\n",sum);

    return 0;
}
