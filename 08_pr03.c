#include<stdio.h>
void change(int*);
int main(){

    int i = 5;
    printf("the address of i is %u\n",i);
    change(&i);
    printf("the value of i after change is %u \n ",i);
 return 0;
}
void change( int *ptr){
    *ptr = (*ptr)*10;
}