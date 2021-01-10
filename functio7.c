#include<stdio.h>
void display( char st1[])
{
    int i=0;
    while(st1[i]!='\0')
    {
        printf("%c\n",st1[i]);
        i++;
    }
}
int main()
{
    char str[]= "mamun";
    display(str);
}

