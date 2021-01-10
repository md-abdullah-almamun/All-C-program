//Writing to a file using fprintf()//
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[50];
    int age;

    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {

        printf("File is opened\n");
        printf("enter your name:");
        gets(name);
        printf("enter your age:");
        scanf("%d",&age);
        fprintf(file,"Name = %s ,age = %d\n",name,age);
        fputs(name,file);
        fclose(file);
    }


}
