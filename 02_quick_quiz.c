#include<stdio.h>
#include<string.h>
struct employee{
    int salary;
    float hike;
    char Name[10];
};
int main(){
    
    struct employee Sangamesh,Sukhwinder,Raju;
printf("Entre the details for Sangamesh\n");
printf("Enter the name for employee\n");
scanf("%s",&Sangamesh.Name);
printf("Enter the salary of Employee \n");
scanf("%d",&Sangamesh.salary);
printf("Enter the hike\n",Sangamesh.hike);
scanf("%f",&Sangamesh.hike);

printf("Entre the details for Sukhwinder\n");
printf("Enter the name for employee\n");
scanf("%s",Sukhwinder.Name);
printf("Enter the salary of Employee \n");
scanf("%d",Sukhwinder.salary);
printf("Enter the hike\n");
scanf("%f",Sukhwinder.hike);

printf("Entre the details for Raju\n");
printf("Enter the name for employee\n");
scanf("%s",Raju.Name);
printf("Enter the salary of Employee \n");
scanf("%d",Raju.salary);
printf("Enter the hike\n");
 scanf("%f",Raju.hike);  
  
   printf("The name of employee is %s\n",Sangamesh.Name);
   printf("Salary is %d\n",Sangamesh.salary);
   printf("Hike per year is %f\n",Sangamesh.hike);

   printf("The name of employee is %s\n",Sukhwinder.Name);
   printf("Salary is %d\n",Sukhwinder.salary);
   printf("Hike per year is %f\n",Sukhwinder.hike);
    
    printf("The name of employee is %s\n",Raju.Name);
   printf("Salary is %d\n",Raju.salary);
   printf("Hike per year is %f\n",Raju.hike);
    return 0;
}