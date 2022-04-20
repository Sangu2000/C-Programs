#include<stdio.h>
#include<string.h>
int main(){
    char source[] = "Sangamesh";
    char target[45];
    strcpy(target,source);

    printf("the target of your name is %s \n", target);
    return 0;
}