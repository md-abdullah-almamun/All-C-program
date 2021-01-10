//number1 raised to the power number2 (number1^number2)


#include<stdio.h>// include stdio.h library
// the main function returns an integer value.
int main()
{
    //declaring variables
    int number1,number2;
    ////declaring variables
    double result;
    //display the  taking a int number1 as input
    printf("Enter any number1 =");
    scanf("%d",&number1);
    //display the  taking a int number2 as input
    printf("Enter any number2  =");
    scanf("%d",&number2);
    //Calculate the result of number1 raised to the power of number2
    result=pow(number1, number2);
    // Display the result of the calculation
    printf("show the result %.2lf",result);

    return 0; // return 0 to operating system
}
