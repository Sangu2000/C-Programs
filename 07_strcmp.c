#include<stdio.h>
#include<string.h>
int main(){
    char source[] = "Sangamesh";
    char target[] = "kaustubh";
    strcmp(source,target);

    printf("the strcmp return is %d \n",strcmp(source,target) );
    return 0;
}