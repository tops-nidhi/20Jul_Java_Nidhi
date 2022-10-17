#include<iostream>
using namespace std;
class Friend_Function
{
private:
    int no;
public:
    friend int data(Friend_Function);  
};
int data(Friend_Function fd)
{
    cout<<"Enter no:";
    cin>>fd.no;
    cout<<"The value of no is:"<<fd.no;
    return 0;
}
int main()
{
    Friend_Function fn;
    data(fn);
    return 0;
}
