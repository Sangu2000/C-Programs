#include<stdio.h>
int main(){
    int i = 0;
    while(i<7){
        if(i == 5){
            break;
        }
        printf("The value if i is %d\n",i);
        i++; 

    }
    printf("we are out off the loop now\n");
    return 0;
}