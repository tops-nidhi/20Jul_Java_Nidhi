#include<iostream>
using namespace std;
class ThisOperator
{
private:
    /* data */
public:
    int c;//data member
    int data()
    {
        int c=10;//Local variable
        cout<<"Value of local variable c is:"<<c;
        cout<<endl<<"Vlaue of data member c is:"<<this->c;
        return 0;
    }
};
int main()
{
    ThisOperator tp;
    tp.c=100;
    tp.data();
    return 0;
}
