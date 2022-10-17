#include<iostream>
using namespace std;
class Encasulation
{
    int a,b;
public:
    int getdata()
    {
        cout<<"Enter 2 no:";
        cin>>a>>b;
        cout<<"Value of a is:"<<a<<"\nValue of b is:"<<b;
        return 0;
    }
    int showdata()
    {
        cout<<"Value of a is:"<<a<<"\nValue of b is:"<<b;
        return 0;
        
    }
};
int main()
{
    Encasulation en;
    en.getdata();
    en.showdata();
}