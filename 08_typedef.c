#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int salary;
    float hike;
    char Name[10];
} emp ;

int main(){
emp Sangamesh = {200000,5,"Sangamesh"};
emp *ptr = &Sangamesh;
printf("The name of employee is %s\n",(*ptr).Name);
   printf("Salary is %d\n",(*ptr).salary);
   printf("Hike per year is %f\n",(*ptr).hike);
    return 0;
}