#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr,i;

    ptr=&a[0];
    for(i=0;i<5;i++)
    {
        printf("a[%d]=%d\n",*ptr);
        ptr++;
    }
}
