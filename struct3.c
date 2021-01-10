//structure comparison
#include<stdio.h>
struct person
{
    int age;
    int salary;
};
int main()
{
    struct person person1={25,2555};
    struct person person2;

    person2=person1;

    if(person1.age==person2.age && person1.salary==person2.salary)


        printf("this is equal");

        else

            printf("this is not equal");



    return 0;
}
