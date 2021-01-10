#include <stdio.h>
int main()
{
    int number1, number2;
    int sum, sub, mult ;
    float div;


    printf("Enter 1st number : ");
    scanf("%d",&number1);

    printf("Enter 2nd number : ");
    scanf("%d",&number2);

    sum = number1 + number2;
    sub = number1 - number2;
    mult = number1 * number2;
    div = (float)number1 / number2;


    printf("The sum of the given numbers : %d\n", sum);
    printf("The sub of the given numbers : %d\n", sub);
    printf("The mult of the given numbers : %d\n", mult);
    printf("The div of the given numbers : %f\n", div);


    return 0;
}

