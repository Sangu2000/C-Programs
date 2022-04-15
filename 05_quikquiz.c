#include<stdio.h>
int main(){
    int i = 3;
    int *ptr = &i;
    printf("the value of i is %d \n",i);
    printf("the address of ptr is %u \n",ptr);
    printf("The address of ptr is  %u \n",&i);
    ptr++;
     printf("The address of ptr after increment is  %u \n",&i);
    printf("the address of ptr after ptr is incremented is %u \n",ptr);
    ptr = ptr + 2;
     printf("The address of ptr after increment is  %u \n",&i);
    printf("the address of ptr after ptr is incremented is %u \n",ptr);
    ptr = ptr + 2;
    printf("The address of ptr after increment is  %u \n",&i);
    printf("the address of ptr after ptr is incremented is %u \n",ptr);
    
   
    return 0;
}