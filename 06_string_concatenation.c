#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Sangamesh";
    char str2[] = " Sangewar" ;
    strcat(str1,str2);

    printf("the target of your name is %s \n", str1);
    return 0;
}