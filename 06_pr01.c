#include<stdio.h>
int main(){
    int a = 5;
    int b =6;
    printf("the adress of a and b are %u and %u\n",&a,&b);
    printf("the value of address are %u and %u",*(&a),*(&b));
    return 0;
}