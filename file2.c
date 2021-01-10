//Writing to a file using fputc()//
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[50]="md abdullah al mamun";
    int length = strlen(name);
    int i;

    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {

        printf("File is opened\n");

        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        printf("file is written successfully");
        fclose(file);
    }


}

