#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[20];
    int age,phoneNumber,num,i;

    file = fopen("student.txt","a");

    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {
        printf("File is opened\n");
       printf("how many student:");
       scanf("%d",&num);
       for(i=1;i<=num;i++)
       {
           printf("enter student name:\n");
           gets(name);
           printf("enter student  age:");
           scanf("%d",&age);
           printf("enter student phone number:");
           scanf("%d",&phoneNumber);
           fprintf(file,"%s\t\t%d\t\t%d\n",name,age,phoneNumber);

       }
       fclose(file);
    }

}
