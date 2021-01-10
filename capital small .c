//capital/small
#include<stdio.h>
int main()
{
    char letter;
    printf("enter any letter =");
    scanf("%c",&letter);

    if(letter>='a'&& letter<='z')
    {
        printf("small letter");

    }
    else if(letter>='A'&& letter<='Z')
    {
        printf("capital letter");

    }
    else
    {
        printf("not a letter");
    }
    return 0;
}
