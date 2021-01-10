//passing structure variable to function
#include<stdio.h>
#include<string.h>
struct person
{
    char name[20];
    int age;
    int salary;


};
void display(struct person p)
{
    printf("%s\n",p.name);
    printf("%d\n",p.age);
    printf("%d\n",p.salary);
}
int main()
{
   struct person person1;

   strcpy(person1.name,"abdullah");
   person1.age=20;
   person1.salary=2000;

   display(person1);
}
