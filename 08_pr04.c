#include<stdio.h>
int fib(int);
int n = 6;
int main(){
printf("The elemt %d of fibonacci series is %d \n",n,fib(n));

    return 0;
}
int fib(int n){
    if (n==1  || n==2)
    {
        return 1;
    }
    
    return fib(n-1) + fib(n-2);
}