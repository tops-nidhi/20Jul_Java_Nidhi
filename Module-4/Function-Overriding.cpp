#include<iostream>
using namespace std;
class A
{
    public:
    int data(int a)
    {
        return a;
    }
};
class B 
{
    public:
    int data(int a)
    {
        return a;
    }
};
int main()
{
    A a1;
    B b1;
    cout<<a1.data(12);
    cout<<endl<<b1.data(15);
}