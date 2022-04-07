#include<stdio.h>
int main(){
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += (i*8);
    }
    printf("the sum of multiples of 8 is %d \n",sum);
    return 0;
}