#include<stdio.h>
int main(){
    FILE*ptr;
    ptr = fopen("writeFile.txt","w");
    int i = 99;
    
    fprintf(ptr,"%d",i);
    fclose(ptr);
    return 0;
}