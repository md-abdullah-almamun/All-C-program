#include<stdio.h>
#include<math.h>>
int main()
{
    double number;
    double result;

    printf("Enter any number =");
    scanf("%lf",&number);

    result=log10(number);
    printf("log10(%lf) = %lf",number,result);
    return 0;
}
