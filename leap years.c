#include<stdio.h>
int main()
{
    int year;
    printf("enter any year =");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("Leap year");
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("Leap year");
    }
    else
    {
        printf("this is not leap year");
    }
    return 0;
}
