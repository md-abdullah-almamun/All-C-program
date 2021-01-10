#include<stdio.h>
int main()
{
    int x=10,y=20,z=30;
    int *ptr;

    ptr=&x;
    ptr=&y;
    ptr=&z;

    printf("x=%d\n",*ptr);
    printf("y=%d\n",*ptr);
    printf("z=%d\n",*ptr);
}
