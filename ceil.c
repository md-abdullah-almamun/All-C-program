#include<stdio.h>
#include<math.h>
int main()
{
    double number;
    double result;

    printf("Enter any number=");
    scanf("%lf",&number);

    result=ceil(number);
    printf("ceil(%lf) = %lf",number,result);

     return 0;
}
