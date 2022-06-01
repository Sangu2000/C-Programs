#include<iostream>
using namespace std;
class book{
    public:
    string title;
    string author;
    int pages;
    book(string name, string author, int pages){
title = name;
author=author;
pages = pages;
    }

};
int main(){

book Book1("Panipat","Vishwas Patil", 650);


book Book2("Mrityunjay","Shivaji Sawant",757);

cout<<Book1.title<<endl;
    return 0;
}