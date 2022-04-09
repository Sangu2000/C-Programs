#include<stdio.h>
double Celcious(int);
int main(){
printf("the temp into F is %lf \n",Celcious(66));
    return 0;
}
double Celcious(int C){
    return (C*(9/5.0))+32;
}