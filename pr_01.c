#include<stdio.h>
int main(){
 int marks1, marks2, marks3;
 printf("Whats your marks1\n");
 scanf("%d",&marks1);
 printf("Whats your marks2\n");
 scanf("%d",&marks2);
printf("Whats your marks3\n");
scanf("%d",&marks3);
if((marks1+marks2+marks3)/3>=40){
    if(marks1<33 || marks2<33 || marks3<33){
        printf("Sorry! you have less marks than 33");
    }
    else{
        printf("Congrts!Your are passed\n");
        }
    

}else{
    printf("You have not pssed the test, you have less than 40%%");}



    return 0 ;

}