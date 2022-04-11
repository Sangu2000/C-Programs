#include<stdio.h>
int main(){
int i = 72;
int j = 569;
printf("The address of i and j is %u",&i, &j);
printf("The address of i and j is %u",*(&i), *(&j));

    return 0;
}