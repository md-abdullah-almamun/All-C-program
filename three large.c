#include<stdio.h>
int main()
{
    int number1,number2,number3;
    printf("enter any three number =");
    scanf("%d %d %d",&number1,&number2,&number3);

    if(number1>number2 && number1>number3)
    {
        printf("%d",number1);
    }
    else if(number2>number1 && number2>number3)
    {
        printf("%d",number2);
    }
    else if(number3>number1 && number3>number2)
    {
        printf("%d",number3);
    }
    else
    {
        printf("number is equal");
    }
    return 0;


}
