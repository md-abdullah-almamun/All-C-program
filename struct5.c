//Array within structure
#include<stdio.h>
struct person
{
    char name[4];
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
       printf("enter name:");
       scanf("%s",&person[i].name);
       printf("enter age=");
       scanf("%d",&person[i].age);
       printf("enter salary=");
       scanf("%d",&person[i].salary);
   }
   for(i=0;i<4;i++)
   {
       printf("information for person%d\n",i+1);
       printf("name:%s\n",person[i].name);
       printf("age=%d\n",person[i].age);
       printf("salary=%d\n",person[i].salary);

   }
}
