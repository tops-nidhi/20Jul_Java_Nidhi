#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20];
    char str2[20];
    int cmp;
    printf("Enter your 2 string to compare:");
    scanf("%s%s",&str1,&str2);
    cmp=strcmp(str1,str2);
    if(cmp < 0)
    	printf("Max string is:%s",str2);
    else if(cmp == 0)
    	printf("Both are same.");
    else
    	printf("Max string is:%s",str1);
}
