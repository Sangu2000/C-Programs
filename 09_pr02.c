#include<stdio.h>
#include<string.h>
 int mystrlen(char* st){
    int length = 0;
    char* ptr = st;
    while (*ptr!='\0')
    {
        length++;
        ptr++;
    }
    return length;

}
int main(){
    char st[]="Sangamesh";
    printf("the length of the string is %d", mystrlen(st));
    return 0;
    
}