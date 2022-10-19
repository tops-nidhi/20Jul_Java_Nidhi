#include<iostream>
using namespace std;
template <typename t>
class Template
{
public:
    t add(t a, t b)
    {
        return a+b;
    }
};
int main()
{
    int a,b;
    cout<<"Enter 2 no:";
    cin>>a>>b;
    Template <int> t1;
    cout<<t1.add(a,b);
    Template <float> t2;
    cout<<endl<<t2.add(1.2,8.9);
}