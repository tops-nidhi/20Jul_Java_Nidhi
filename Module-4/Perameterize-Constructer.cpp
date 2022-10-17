#include<iostream>
using namespace std;
class Construct
{
public:
    Construct(int no)
    {
        cout<<"Value of construcrter is:"<<no;
    }
};
int main()
{
    int no;
    cout<<"Enter value of constructer:";
    cin>>no;
    Construct con(no);
}