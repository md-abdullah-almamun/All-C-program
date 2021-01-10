#include<stdio.h>
int main()
{
    char m[30];

    printf("your full name:");
    //scanf("%s",&m);
    gets(m);


    printf("full name = %s\n",m);

    return 0;
}

