#include<stdio.h>
int main(){
    int n ;
 printf("Write any number\n");
    scanf("%d",&n);

    for(int i = 0; i < 11; i++){
        printf("%d X %d = %d \n", n, i, i*n);
    }
    return 0;
}