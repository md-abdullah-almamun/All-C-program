#include<stdio.h>
int main()

{
    int a=1,num,sum=0;
    printf("enter the last number : ");
    scanf("%d",&num);
    printf("1 + 2 + 3+.........+%d",num);

    while(a<=num)
    {
        sum=sum+a;
        a=a+1;
    }
    printf("=%d\n",sum);
    return 0;

}
