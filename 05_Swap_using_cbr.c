#include<stdio.h>
void swap(int*,int*);
int main(){
    int a =5;
    int b = 7;
    printf("values of a and b are %d and %d \n",a,b);
    swap(&a,&b);
    printf("values of a and b after swap are %d and %d",a,b);

    return 0; 
}
void swap(int *aptr, int *bptr){
    int temp;
    temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;


}

