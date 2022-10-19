#include<iostream>
using namespace std;
class Operator
{
public:
    int a;
    int get()
    {
        cout<<"\nEnter value of no:";
        cin>>a;
        return 0;
    }
    Operator operator -(Operator op2)
    {
        Operator op3;
        op3.a = a + op2.a;
        return op3;
    }
    int show()
    {
        cout<<"\nValue of a is:"<<a;
        return 0;
    }
};
int main()
{
    Operator obj1,obj2,obj3;

    obj1.get();
    obj2.get();
    obj3 = obj1 - obj2;
    obj3.show();
}