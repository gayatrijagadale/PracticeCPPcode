#include<iostream>
using namespace std;
int main()

{
 int val_1,val_2,sum,sub,mul,div;
 cout<<"Enter the first value";
 cin>>val_1;
 cout<<"Enter the second value";
 cin>>val_2;

sum=val_1+val_2;
sub=val_1-val_2;
mul=val_1*val_2;
div=val_1/val_2;
cout<<"Addition is:"<<sum<<endl;
cout<<"Subtraction is:"<<sub<<endl;
cout<<"Multiplication is:"<<mul<<endl;
cout<<"Division is:"<<div<<endl;
return 0;

}