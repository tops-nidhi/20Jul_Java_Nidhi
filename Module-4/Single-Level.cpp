#include<iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout<<"This is Base class.";
    }
};
class Derived : public Base
{
public: 
    Derived()
    {
        cout<<"\nThis is Derived class.";
    }
};
int main()
{
    Derived d1;
}