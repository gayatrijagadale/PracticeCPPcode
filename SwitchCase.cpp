#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Input the Chracter:";
    cin>>button;
    switch(button)
    {
        case'a':
        cout<<"HELLO"<<endl;
        break;
        case'b':
        cout<<"HOLA"<<endl;
        break;
        case'c':
        cout<<"NAMSTE"<<endl;
        break;
        case'd':
        cout<<"CIOA"<<endl;
        break;
        case'e':
        cout<<"SALUT"<<endl;
        break;
        default:
        cout<<"I'm still learning more!"<<endl;
        break;
    }
    return 0;
}