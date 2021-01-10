#include<stdio.h>

int main()
{
    int a;
    printf("enter any number...");
    scanf("%d",&a);

    int result=square(a);
    printf("the result %d\n..",result);
}
int square( int a)
{
    return a*a;
}

