#include<stdio.h>
int main(){
 int arr[10];
 arr[0] = 7;
 arr [1] = 8;
 arr[2] = 10;
 arr[3] = 5;
 int *ptr = arr;
 printf("the value of array %d \n", *ptr);
 ptr = ptr+2;
 printf("the value of array %d \n", *ptr);

    return 0;
}