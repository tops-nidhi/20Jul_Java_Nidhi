#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream fout;
    fout.open("D:/nidhi batch/29jul_SE/module-4/Hello.txt");
    fout<<"Hello";
    fout.close();
    ifstream fin("D:/nidhi batch/29jul_SE/module-4/Hello.txt");
    fin>>str;
    cout<<str;
    fin.close();
}