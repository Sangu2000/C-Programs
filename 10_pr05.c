#include<stdio.h>
int i =3;
int *ptr1 = &i;
int **ptr2 = &ptr1;



int main(){
    printf("the value of i is %u \n",i);
    printf("the value of i is %u \n",*ptr1);
    printf("the value of i is %u \n",**ptr2);
    return 0;
}