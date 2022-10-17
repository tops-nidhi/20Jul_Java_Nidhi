#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"This class A.\n";
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout<<"\nThis is class B.\n";
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout<<"\nThis is class C.\n";
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout<<endl<<"This is class D.";
    }
};
int main()
{
    D d1;
};
