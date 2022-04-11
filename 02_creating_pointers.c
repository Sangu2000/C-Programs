#include<stdio.h>
int main()
{
int i = 72;

int *j = &i;
printf("the value of j is %u \n",&i);
printf(" the value of *j is %u \n",*j);
printf("the value of &j is %u \n",&j);
printf("the value of i is %u \n",i);
printf("the value of *(&i) is %u \n",*(&i));
printf("the value of *j is %u \n",*j);

return 0;


}
    
    
