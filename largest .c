#include<stdio.h>
int main()
{
    int number1,number2;

    printf("enter two number =");
    scanf("%d %d",&number1,&number2);

    /*printf("enter second number =");
    scanf("%d",&number2);*/

    if(number1>number2)
    {
        printf("lager =%d\n",number1);
    }
     else if (number1<number2)
    {
        printf("lager= %d\n",number2);

    }
    else
    {
        printf("number are equal");
    }
    return 0;
}
