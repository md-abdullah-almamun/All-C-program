#include<stdio.h>
int main()
{
    char m[]="md abdullah al mamun";
    int i=0,length=0;

    while(m[i]!='\0')
    {
        i++;
        length++;

    }
    printf("length =%d\n",length);
    return 0;
}
