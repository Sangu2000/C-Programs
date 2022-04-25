#include<stdio.h>
#include<string.h>
struct employee{
    int salary;
    float hike;
    char Name[10];
};
int main(){
    
    struct employee Sangamesh;
   strcpy(Sangamesh.Name,"Sangamesh");
   Sangamesh.hike = 3.5;
   Sangamesh.salary = 100000;
   printf("The name of employee is %s\n",Sangamesh.Name);
   printf("Salary is %d\n",Sangamesh.salary);
   printf("Hike per year is %f\n",Sangamesh.hike);

   
    
    return 0;
}