//Reading a file using fgetc()//
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char ch ;

    file = fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {
        printf("File is opened\n");
       while(!feof(file))
       {
           ch=fgetc(file);
           printf("%c",ch);
       }
       fclose(file);
    }


}
