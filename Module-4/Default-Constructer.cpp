#include<iostream>
using namespace std;
class Construct
{
public:
    Construct()
    {
        cout<<"This is default consruct.";
    }
    int showdata()
    {
        cout<<"\nThis is UDF function.";
        return 0;
    }
};
int main()
{
    Construct con;
    con.showdata();
}