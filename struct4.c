// Array of structure
#include<stdio.h>
struct person
{
    int age;
    int salary;

};
int main()
{
   struct person person[4];
   int i;
   for(i=0;i<4;i++)
   {
       printf("enter information for person%d\n",i+1);
       printf("enter age=");
       scanf("%d",&person[i].age);
       printf("enter salary=");
       scanf("%d",&person[i].salary);
   }
   for(i=0;i<4;i++)
   {
       printf(" information for person%d\n",i+1);
       printf(" age=%d\n",person[i].age);
       printf(" salary=%d\n",person[i].salary);

   }
}
