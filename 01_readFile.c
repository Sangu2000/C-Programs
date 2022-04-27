#include<stdio.h>
int main(){
    FILE*ptr;
    ptr = fopen("sampleFile.txt","r");
    char ch;
    fscanf(ptr,"%c",&ch);
    printf("The first char is %c",ch);
    return 0;
}