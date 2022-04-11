#include<stdio.h>
void func(int*);
int main(){

    int i = 5;
func(&i);
    printf("the address of i is %u\n",&i);
    printf("the value of i is%u\n ",*(&i));
return 0;
}
void func( int *ptr){
    printf("the value of address of ptr from function func is %u\n",ptr);
}