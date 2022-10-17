#include<iostream>
using namespace std;
class Class
{
private:
    int no;
public:
    int no1;
    int getdata()
    {
        cout<<"Enter no1:";
        cin>>no;
        cout<<"Enter no2:";
        cin>>no1;
        return 0;
    }
    int showdata()
    {
        cout<<"\nNo1 is:"<<no;
        cout<<"\nNo2 is:"<<no1;
        return 0;
    }
protected:
    int no2;
};
int main(int argc, char const *argv[])
{
    Class obj;
    obj.getdata();
    obj.showdata();
    return 0;
}
