#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *ptr;
    int i,no;
    printf("Enter the memory size:");
    scanf("%d",&no);
    ptr=(float*)calloc(no,sizeof(int));
    for(i = 0; i < no; i++)
    {
        printf("Enter %d no:",i+1);
        scanf("%f",&ptr[i]);
    }
    for(i = 0; i < no; i++)
    {
        printf("No %d is:%f\n",i+1,ptr[i]);
    }
    printf("\nEnter new memory size:");
    scanf("%d",&no);
    ptr=(float*)realloc(ptr,no*sizeof(int));
    for(i = 0; i < no; i++)
    {
        printf("Enter %d no:",i+1);       
        scanf("%f",&ptr[i]);
    }
    for(i = 0; i < no; i++)
    {
        printf("Value %d is:%f\n",i+1,ptr[i]);
    }
    free(ptr);
}