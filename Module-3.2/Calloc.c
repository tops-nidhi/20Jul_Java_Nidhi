#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int i,no;
    printf("Enter the memory size:");
    scanf("%d",&no);
    ptr=(int*)calloc(no,sizeof(int));
    for(i = 0; i < no; i++)
    {
        printf("Enter %d no:",i+1);
        scanf("%d",&ptr[i]);
    }
    for(i = 0; i < no; i++)
    {
        printf("No %d is:%d\n",i+1,ptr[i]);
    }
}