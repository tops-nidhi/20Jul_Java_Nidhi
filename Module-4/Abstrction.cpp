#include<iostream>
using namespace std;
class Abstract 
{
int no;
public:
    int data()
    {
        cout<<"Enter no:";
        cin>>no;
        cout<<"Value of no is:"<<no;
        return 0;
    }
};
int main()
{
    Abstract ab;
    ab.data();

}