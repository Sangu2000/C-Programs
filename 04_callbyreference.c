#include<stdio.h>
int sum(int*, int*);
int main(){
int x = 5;
int y = 8;
printf("the addition of x and y is %d \n",sum(&x,&y));
printf("the value of x and y is %d and %d ",x,y);
     
    return 0;
}
int sum (int *a, int *b){
     *a = 25;
return  *a + *b ;}