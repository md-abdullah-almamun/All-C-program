#include<stdio.h>
int main()
{
    int num []={20,5,30,40};
    int maximumvalue=maximum(num);
    printf("maximum=%d\n",maximumvalue);
}
int maximum (int num[])
{
    int i;
    int max=num[0];
    for(i=0;i<5;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    return max;
}
