#include<stdio.h>
int main(){
    int i;
    float cgpa[3]= {3.4,2.4,6.6};

for (int i = 0; i < 3; i++)
{
   printf("The cgpa of %d students is %f \n",i+1,cgpa[i]) ;
}

    return 0;
}