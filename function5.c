#include<stdio.h>
int main()
{
    int num[]={20,30,40,50};
    display(num);
}
void display(int x[])

{
   int i;
   for(i=0;i<4;i++)
   {
       printf(" %d",x[i]);
   }


}
