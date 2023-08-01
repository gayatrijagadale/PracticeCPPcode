#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no."<<endl;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%2==0){
            cout<<"composite ";
            break;

        }
    }
    if(i==n){
        cout<<"prime"<<endl;

    }
    return 0;
}