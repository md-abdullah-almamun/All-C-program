#include<stdio.h>
#include<math.h>
int main()
{
    double number;
    double result;

    printf("Enter any number =");
    scanf("%lf",&number);

    result=trunc(number);
    printf("trunc(%lf) = %lf",number,result);

    return 0;
}
