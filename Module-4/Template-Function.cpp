#include<iostream>
using namespace std;
template <class t>
t add(t a, t b)
{  
    return a+b;
}
int main()
{
    cout<<add <int> (12, 90);
    cout<<endl<<add <float> (1.2,9.8);
}