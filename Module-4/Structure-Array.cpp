#include<iostream>
using namespace std;
struct StructureArray
{
    int id;
    string nm;
};
int main()
{
    
    int i,count;
    cout<<"Enter the no of student:";
    cin>>count;
    struct StructureArray sa[count];

    for ( i = 0; i < count; i++)
    {
        cout<<"Enter "<<i<<"student id:";
        cin>>sa[i].id;
        cout<<"Enter "<<i<<"student name:";
        cin>>sa[i].nm;
    }
    for ( i = 0; i < count; i++)
    {
        cout<<endl<<i<<" Student id is:"<<sa[i].id;
        cout<<"\t"<<" Student name is:"<<sa[i].nm;
    }
    
    
    return 0;
}
