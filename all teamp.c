//Menu Based Temperature conversion

#include<stdio.h>
int main()
{
    int choics;
    float temp;
    float converted_Temp;

    printf("Temperature conversion menu\n");

    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");

    printf("Enter your choice:");
    scanf("%d",&choics);

    switch(choics)
    {
        case 1:
        {
            printf("Enter the Fahrenheit temperature :");
            scanf("%f",&temp);
            converted_Temp = (temp-32)/1.8;
            printf("The temperature in Celsius is: %f\n",converted_Temp);

        }

        case 2:
        {
            printf("Enter the Celsius:");
            scanf("%f",&temp);
            converted_Temp =(temp*1.8)/32;
           // printf("The temperature in Fahrenheit is: %f\n",converteTemp);
            printf("The temperature in Fahrenheit is: %f\n",converted_Temp);


        }
        default:
            {
                printf("not a correct option");
            }
    }
    return 0;
}
