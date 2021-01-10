//Fahrenheit to Centigrade
#include<stdio.h>
int main()
{
    float F,c;
     printf("Enter fahrenheit:");
     scanf("%f",&F);

     c =(F - 32)/1.8;
     printf("Centigrade: %.2f\n",c);

    return 0;
}
