//copy all elements of an array to another array
#include<stdio.h>
int main()
{
    int array1[100],i,n,array2[100];

    printf("how many number:");
    scanf("%d",&n);

   // printf("enter the array1 element %d=",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);


    }


    printf("array1:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d\n",array1[i]);
    }

     for(i=0;i<n;i++)
     {
         array2[i]=array1[i];

     }
     printf("array2:\n");
     for(i=0;i<n;i++)
     {
         printf(" %d\n",array2[i]);
     }
     return 0;
}
