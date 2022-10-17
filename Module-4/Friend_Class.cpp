#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    friend class frnd;
};
class frnd
{
public:
void Friend(A an)
{
    an.a=10;
    cout<<"This is friend class value "<<an.a;
}
};  
int main()
{
    A a1;
    frnd fn;
    fn.Friend(a1);
}