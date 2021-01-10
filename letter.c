//lowercase to enter uppercase letter
#include<stdio.h>
int main()
{
    char lower ;
    printf("enter any lowercase letter:");
    scanf("%c",&lower);
    printf("enter uppercase letter :%c",lower-32);
    return 0;
}
