#include<stdio.h>
float mass(float);
float g = 9.81;
int main(){
printf("Force applied by earth is %f \n",mass(16));
    return 0;
}
float mass(float m){
    float f = m*g;
 return f;
}
 
