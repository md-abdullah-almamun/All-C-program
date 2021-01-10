//A simple multiplication table programme
#include<stdio.h>
int main()
{
//declare data type and variable
int number1, multiplication;
//display the multiplication table and taking a int number as input
printf("The multiplication table: ");
scanf("%d",&number1);
//multiplication in the two integer number and display the result
multiplication = number1*1;
printf("\n%d x 1 = %d\n", number1, multiplication);
multiplication = number1*2;
printf("%d x 2 = %d\n", number1, multiplication);
multiplication = number1*3;
printf("%d x 3 = %d\n", number1, multiplication);
multiplication = number1*4;
printf("%d x 4 = %d\n", number1, multiplication);
multiplication = number1*5;
printf("%d x 5 = %d\n", number1, multiplication);
multiplication = number1*6;
printf("%d x 6 = %d\n", number1, multiplication);
multiplication = number1*7;
printf("%d x 7 = %d\n", number1, multiplication);
multiplication = number1*8;
printf("%d x 8 = %d\n", number1, multiplication);
multiplication = number1*9;
printf("%d x 9 = %d\n", number1, multiplication);
multiplication = number1*10;
printf("%d x 10 = %d", number1, multiplication);
return 0;
}
