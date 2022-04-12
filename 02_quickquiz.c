#include<stdio.h>
int main(){
 int marks[5];
 for (int i = 0; i < 5; i++)
 {
     printf("entre the marks of students %d \n",i+1);
     scanf("%d",&marks[i]);
 }
 for (int i = 0; i < 5; i++)
 {
    printf(" the marks scored by %d student is %d \n",i+1,marks[i]);
    
 }
 
    
    return 0;
}