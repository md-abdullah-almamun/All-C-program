//convert between octal to hexa-decimal

#include<stdio.h>
int main()

{
    //declare all data type
    int number;
    //display the octal number which we have taken from the user
    printf("octal number=");

    //take a one octal integer number as input
    scanf("%o",&number);
    //When I give an octal number, it will convert to% x and show me the hexa-decimal number.
    printf("hexa-decimal=%x",number);

    return 0;

}
