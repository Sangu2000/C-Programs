#include<stdio.h>
#include<string.h>
struct employee
{
    int salary;
    float hike;
    char Name[10];
};

int main(){
struct employee Sangamesh = {200000,5,"Sangamesh"};
printf("The name of employee is %s\n",Sangamesh.Name);
   printf("Salary is %d\n",Sangamesh.salary);
   printf("Hike per year is %f\n",Sangamesh.hike);
    return 0;
}