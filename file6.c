//Reading a file using fgets()//
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char ch[40] ;

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

           fgets(ch,49,file);
           printf("%s",ch);
       }
       fclose(file);
    }

}
