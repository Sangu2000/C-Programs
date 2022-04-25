#include<stdio.h>
struct TwiDimVect
{
    int X;
    int Y;

};
struct TwiDimVect sum( struct TwiDimVect first, struct TwiDimVect second)
{
    int a,b;
    a = first.X + second.X;
    b = second.Y + second.Y;
    struct TwiDimVect result = {a,b};
return result;
};

int main(){
    struct TwiDimVect v1 = {1,4};
    struct TwiDimVect v2 = {11,44};
    struct TwiDimVect v3 =sum(v1,v2);
printf("%di + %dj",v3.X,v3.Y);

    return 0;
}