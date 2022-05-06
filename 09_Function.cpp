#include<iostream>
#include<cmath>
using namespace std;
void sayHii(string name,float marks){
    cout<<"hello"<< name << " your marks are "<<marks <<endl;
}
int main(){
    sayHii(" Sangamesh",95.05);
    sayHii(" Sanjay",93.05);
    sayHii(" Swarali",98.05);
    return 0;
}