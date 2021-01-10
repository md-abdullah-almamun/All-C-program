#include<stdio.h>
int main()
{
    int number1,number2,larger;
    printf("enter two number=");
    scanf("%d %d",&number1,&number2);

    larger=(number1>number2) ? number1:number2;
    printf("larger number = %d",larger);

    return 0;

}
