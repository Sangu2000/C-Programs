#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num1,num2;
    char op;
    cout<<"Write first number:";
    cin>>num1;
    cout<<"Write operator:";
    cin>>op;
    cout<<"Write second number:";
    cin>>num2;
    int result;
    if (op=='+')
    {
        result = num1+num2;
    }else if (op=='-')
    {
       result = num1-num2;
    }else if (op=='/')
    {
        result = num1/num2;
    }else if (op=='*')
    {
        result=num1*num2;
    }
    cout<<result;
    
    
    
    

       return 0;
}