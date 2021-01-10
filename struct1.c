#include<stdio.h>
struct person
{
    int age;
    int salary;

};
int main()
{
    struct person person1,person2;

    person1.age=12;
    person1.salary=12000;

    person2.age=13;
    person2.salary=260000;

    printf("age=%d\n",person1.age);
    printf("salary=%d\n",person1.salary);

    printf("age=%d\n",person2.age);
    printf("salary=%d\n",person2.salary);

}
