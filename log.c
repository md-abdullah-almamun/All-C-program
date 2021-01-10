#include<stdio.h>
#include<math.h>
int main()
{
    double number;
    double result;

    printf("enter any number =");
    scanf("%lf",&number);

    result=log(number);
    printf("log(%lf) = %lf\n",number,result);
    return 0;
}
