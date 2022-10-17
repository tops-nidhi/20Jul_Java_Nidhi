#include<iostream>
using namespace std;
class Operator
{
public:
    int a;
    int get()
    {
        cout<<"Enter value of no:";
        cin>>a;
        return 0;
    }
    Operator operator --()
    {
        Operator op;
        a--;
        return op;
    }
    int show()
    {
        cout<<"\nValue of a is:"<<a;
        return 0;
    }
};
int main()
{
    Operator obj;
    obj.get();
    --obj;
    obj.show();
}