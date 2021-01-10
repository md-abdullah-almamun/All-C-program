// Lower to uppercase letter using library function
#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter any lowercase letter:");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("uppercase letter=%c",upper);
    return 0;


}
