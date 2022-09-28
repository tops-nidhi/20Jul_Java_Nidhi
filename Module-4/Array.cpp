#include<iostream> 
using namespace std;
int main()
{
    int i;
    int no[5];
    int count=5;
    for ( i = 0; i < count; i++)
    {
        cout<<"Enter no:";
        cin>>no[i];
    }
    for ( i = 0; i < count; i++)
    {
        cout<<"No is:"<<no[i]<<endl;
    }
       
    return 0;
}
