#include<stdio.h>
int main()
{
    float marke;

    printf("enter your marke =");
    scanf("%f",&marke);

    if(marke>=80)
    {
        printf("A+");
    }
     else if(marke>=70)
    {
        printf("A");
    }
     else if(marke>=60)
    {
        printf("A-");
    }

      else  if(marke>=50)
    {
        printf("B");

    }
     else
    {
        printf("fail");
    }
    return 0;


}
