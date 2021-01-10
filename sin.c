#include<stdio.h>
#include<math.h>
int main()
{
    double number ;
    double result ;

    printf("Enter any number=");
    scanf("%lf",&number);

    result=sin(number);
    printf("sin(%lf) = %lf\n",number,result);

    return 0;

}
