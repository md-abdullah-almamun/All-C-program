 //switch | Calculator

#include<stdio.h>
int main()
{
    char operator;
    double number1,number2;


    printf("enter any operator:");
    scanf("%c",&operator);


    printf("enter two number=");
    scanf("%lf%lf",&number1,&number2);



    switch(operator)
    {
        case '+' :
        {
            printf("%lf+%lf=%lf\n",number1,number2,number1+number2);
            break;
        }
        case '-' :
        {
            printf("%lf-%lf=%lf\n",number1,number2,number1-number2);
            break;
        }
        case '*' :
        {
            printf("%lf*%lf=%lf\n",number1,number2,number1*number2);
            break;
        }
        case '/' :
        {
            printf("%lf/%lf=%lf\n",number1,number2,number1/number2);
            break;
        }
         default:


        printf("not a valid operator\n");

    }




}
