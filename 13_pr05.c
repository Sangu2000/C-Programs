#include<stdio.h>
int main(){
   int factorial = 1;
    int n;
    printf("Type number who's factorial You want\n");
    scanf("%d",&n);
    for ( int i = 1; i <= n; i++)
    {
       factorial*=i;
    }
     printf("the factorial of a number is %d \n",factorial);
    return 0;
}