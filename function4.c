#include<stdio.h>
int main()
{
    double base,exponent;

    printf("enter the base=");
    scanf("%lf",&base);

    printf("enter the exponent=");
    scanf("%lf",&exponent);

    calculatePower(base,exponent);

}
void calculatePower(double base,double exponent)
{
    double i,result=1;

    for(i=1;i<=exponent;i++)
    {
        result=result*base;

    }
    printf("%.1lf",result);
}

