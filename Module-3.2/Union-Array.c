#include<stdio.h>
union Stdata
{
    int id;
    char nm[20];
};
int main()
{
    int i;
    union Stdata st[10];
    for(i = 0; i < 5; i++)
    {
        printf("Enter student id[%d]:",i+1);
        scanf("%d",&st[i].id);
        printf("Enter student name[%d]:",i+1);
        scanf("%s",&st[i].nm);
    }
    for(i = 0; i< 5; i++)
    {
        printf("\nStudent id[%d] is:%d\nStudent name[%d] is:%s",i+1,st[i].id,i+1,st[i].nm);
    }
}