#include<stdio.h>
#include<string.h>
struct employee
{
    int salary;
    float hike;
    char Name[10];
};
void show(struct employee e){

printf("The name of employee is %s\n",e.Name);
   printf("Salary is %d\n",e.salary);
   printf("Hike per year is %f\n",e.hike);
};
void showref(struct employee *e){
(*e).Name[0]="C";
printf("The name of employee is %s\n",e->Name);
   printf("Salary is %d\n",e->salary);
   printf("Hike per year is %f\n",e->hike);
   (*e).hike=5.5;
};
int main(){
    struct employee Sangamesh = {20000,5,"Sangamesh"};
    show(Sangamesh);
    showref(&Sangamesh);
    printf("The name of employee is %s\n",Sangamesh.Name);
   printf("Salary is %d\n",Sangamesh.salary);
   printf("Hike per year is %f\n",Sangamesh.hike);

    return 0;
};