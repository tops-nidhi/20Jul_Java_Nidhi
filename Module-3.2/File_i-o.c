#include<stdio.h>
int main()
{
    char str1[10];
    char str2[10];
    FILE *fptr;
    printf("Enter your message:");
    scanf("%s",&str2);
    fptr=fopen("D:/nidhi batch/29jul_SE/hello.txt","a");
    fprintf(fptr,"%s",str2);
    fclose(fptr);
    fptr=fopen("d:/nidhi batch/29jul_SE/hello.txt","r");
    fscanf(fptr,"%s",str1);
    printf("\n%s",str1);
    fscanf(fptr,"%s",str1);
    printf("\n%s",str1);
    fscanf(fptr,"%s",str1);
    printf("\n%s",str1);
    fclose(fptr);
}