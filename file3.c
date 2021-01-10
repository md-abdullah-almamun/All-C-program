//Writing to a file using fputs()//
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[50];


    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {

        printf("File is opened\n");
        printf("enter your name");
        gets(name);
        fputs(name,file);
        fclose(file);
    }


}
