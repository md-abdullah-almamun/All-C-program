#include<stdio.h>
#include<stdio.h>
int main()
{
    double number;
    double result;

    printf("enter any number =");
    scanf("%lf",&number);

    result=exp(number);
    printf("exp(%lf) = %lf",number,result);

    return 0;

}
