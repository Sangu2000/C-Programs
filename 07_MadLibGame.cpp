#include<iostream>
#include<math.h>
using namespace std;
int main(){
    string color,pluralNoun,CelebrityName;



    cout<<color<<"roses are  "<<endl;
    getline(cin,color);
    cout<<"violets are "<<pluralNoun<<endl;
    getline(cin,pluralNoun);
    cout<<"Entre celebrity name:";
    getline(cin,CelebrityName);
    cout<<CelebrityName<<" I love you"<<endl;
    
    return 0;
}