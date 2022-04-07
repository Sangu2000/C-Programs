#include<stdio.h>
int main(){
 int n ;
 printf("Write any number\n");
    scanf("%d",&n);

    for(int i = 10; i > 0; i--){
        printf("%d X %d = %d \n", n, i, i*n);
    }


    return 0;
}