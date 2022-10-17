#include<iostream>
using namespace std;
int c=100;
int main()
{
    int a, b,c;
    cout<<"Enter 2 value:";
    cin>>a>>b;
    c=a+b;
    cout<<"Value of addition is:"<<c<<endl;
    cout<<"Value of global varible c is:"<<::c;
}