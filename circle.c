//To determine the area of ​​a circle
#include<stdio.h>
int main()
{
    float redius,area;

    printf("enter the redius =");
    scanf("%f",&redius);

    area= 3.1416 * redius * redius;
    printf("Area of circle = %.2f",area);

    return 0;
}
