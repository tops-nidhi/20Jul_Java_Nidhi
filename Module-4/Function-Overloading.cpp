#include<iostream>
using namespace std;
class Overloding
{
public:
    int sub(int a, int b)
    {
        return a-b;
    }
    int sub(int a, int b, int c)
    {
        return a-b-c;
    }
};
int main()
{
    Overloding over;
    cout<<over.sub(12,45);
    cout<<endl<<over.sub(1,2,4);
    return 0;
}