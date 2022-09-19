#include<stdio.h>
int no;
void getdata()
{
    // int no;
    printf("Enter no:");
    scanf("%d",&no);
}
void showdata()
{
    printf("Value is:%d",no);
}
void main()
{
    getdata();
    showdata();
}