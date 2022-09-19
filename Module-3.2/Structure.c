#include<stdio.h>
struct Stdata
{
    int id;
    char nm[20];
};
int main()
{
    struct Stdata st;
    printf("Enter student id:");
    scanf("%d",&st.id);
    printf("Enter student name:");
    scanf("%s",&st.nm);
    printf("\nStudent id is:%d\nStudent name is:%s",st.id,st.nm);
}