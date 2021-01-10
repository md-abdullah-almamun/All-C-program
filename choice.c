#include <stdio.h>
#include <math.h>

int sum()
{
    float a,b;
    float sum = 0;

    printf("Enter the first number : ");
    scanf("%f", &a);

    printf("Enter the second number : ");
    scanf("%f", &b);


    sum = a + b;


    printf("Summation is %f", sum);

    return sum;

}



int multiplication()
{
    float a,b;
    float multiplication = 0;

    printf("Enter the first number : ");
    scanf("%f", &a);

    printf("Enter the second number : ");
    scanf("%f", &b);


    multiplication = a * b;


     printf("Summation is %f", multiplication);

    return multiplication;

}


int division()
{
    float a,b;
    float division = 0;

    printf("Enter the first number : ");
    scanf("%f", &a);

    printf("Enter the second number : ");
    scanf("%f", &b);


    division = a / b;


     printf("Summation is %f", division);

    return division;

}


int substraction()
{
    float a,b;
    float substraction = 0;

    printf("Enter the first number : ");
    scanf("%f", &a);

    printf("Enter the second number : ");
    scanf("%f", &b);


    substraction = a - b;


     printf("Summation is %f", substraction);

    return substraction;

}


int main ()
{


    int choice;

    printf("\nEnter the choice : ");
    printf("1 .Add\n");
    printf("2.Multiplication\n");
    printf("3.Division\n");
    printf("4.Substraction\n");


    scanf("%d", &choice);

    if(choice == 1)
        {
            sum();
            main();

        }

   else if(choice == 2)
        {
            multiplication();
            main();

        }


         else if(choice == 3)
        {
            division();
            main();

        }

        else if(choice == 4)
        {
            substraction();
            main();

        }

    return 0;
}
