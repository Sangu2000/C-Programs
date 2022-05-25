#include<iostream>
using namespace std;
class book{
    public:
    string title;
    string author;
    int pages;

};
int main(){
book Book1;
Book1.title = "Panipat";
Book1.author = "Vishwas Patil";
Book1.pages = 650;
cout<<Book1.pages;
    return 0;
}