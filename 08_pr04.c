#include<stdio.h>
void avgandsum(float,float,float*,float*);
int main(){
float a = 5;
float b = 500;
float sum , avg ;
avgandsum(a,b,&sum,&avg);
printf("the avg and sum of a and b is %f and %f,m   \n",sum,avg);

    return 0;
}
void avgandsum(float a, float b, float * ptr1,float * ptr2){
    *ptr1 = a+b ;
    *ptr2 = (a+b)/2;
}