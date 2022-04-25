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
struct employee *ptr = &Sangamesh;
printf("The name of employee is %s\n",ptr->Name);
   printf("Salary is %d\n",ptr->salary);
   printf("Hike per year is %f\n",ptr->hike);
    return 0;
}