#include<iostream>
using namespace std;
int main()
{
    int n;
    int count=1;
    cout<<"Enter the no.which you want sum:";
    cin>>n;
    int sum=0;
    for(count=1; count<=n; count++ )
    sum=sum+count;{
        cout<<"sum :"<<sum<<endl;


    }
    return 0;
}