#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;

    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File dosen't exist");
    }
    else
    {

        printf("File is opened\n");

        fclose(file);
    }


}
