// Positive/Negative
#include<stdio.h>
int main()
{
    int number;
    printf("enter any number =");
    scanf("%d",&number);

    if(number>0)
    {
        printf("postive number");

    }
    else if (number<0)
    {
        printf("negative number");

    }
    else
    {
        printf("zero");
    }
    return 0;
}
