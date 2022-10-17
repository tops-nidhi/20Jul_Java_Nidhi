#include<iostream>
using namespace std;
class Madhvi
{
public:
int mid;
    Madhvi()
    {
       cout<<"\nEnter your id:";
       cin>>mid;
    }
};
class Khyati 
{
public:
int kid;
    Khyati()
    {
        cout<<"\nEnter your id:";
        cin>>kid;
    }
};
class Tops : public Madhvi, public Khyati
{
public:
    Tops()
    {
        cout<<"\nMadhvi's id is:"<<mid;
        cout<<"\nKhyati's id is:"<<kid;
    }
};
int  main()
{
    Tops t1;
}