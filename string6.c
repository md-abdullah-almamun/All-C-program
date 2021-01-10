#include<stdio.h>
int main()
{
    char source[]="md abdullah al mamun";
    char target[100];

    strcpy(target,source);

    printf("source =%s\n",source);
    printf("target =%s\n",target);

    return 0;
}
