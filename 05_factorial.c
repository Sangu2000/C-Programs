#include<stdio.h>
factorial(int);
int main(){
printf("the factorial is %d",factorial(6));
    return 0;
}
factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);

}