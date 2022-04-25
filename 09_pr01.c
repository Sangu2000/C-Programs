#include<stdio.h>
struct TwiDimVect
{
    int X;
    int Y;

};

int main(){
   struct TwiDimVect v1 = {1,4};
    struct TwiDimVect v2 = {11,44};
printf("%di + %dj\n",v1.X,v2.Y);
printf("%di + %dj",v2.X,v1.Y);
    return 0;
}