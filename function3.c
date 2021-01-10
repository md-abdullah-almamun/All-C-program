#include<stdio.h>
double tringleArea(double b,double h);
int main()
{
    double base,height;

    printf("enter the base=");
    scanf("%lf",&base);

    printf("enter the height=");
    scanf("%lf",&height);

    double area=tringleArea(base,height);
    printf("%.lf",area);

}
double tringleArea(double b,double h)
{
   return 0.5*b*h;
}
