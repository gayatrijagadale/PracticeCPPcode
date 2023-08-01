#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the your age:";
    cin>>age;

    if(age>=18){
    cout<<"you are eligible for vote"<<endl;
    }
    else{
    cout<<"you are not eligible for vote"<<endl;
    cout<<"you wait for:"<<18-age +"year!!!";
    }
    return 0;
}