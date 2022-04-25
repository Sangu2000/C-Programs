#include<string.h>
struct employee{
    int salary;
    float hike;
    char Name[10];
};
int main(){
    struct employee facebook[0];
    printf("Entre the details for Sangamesh\n");
printf("Enter the name for employee\n");
scanf("%s",&facebook[0].Name);
printf("Enter the salary of Employee \n");
scanf("%d",&facebook[0].salary);
printf("Enter the hike\n",&facebook[0].hike);
scanf("%f",&facebook[0].hike);

printf("The name of employee is %s\n",facebook[0].Name);
   printf("Salary is %d\n",facebook[0].salary);
   printf("Hike per year is %f\n",facebook[0].hike);
    return 0;
}