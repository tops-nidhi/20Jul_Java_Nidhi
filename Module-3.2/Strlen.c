#include<string.h>
#include<stdio.h>
void main()
{
    char str1[20];
    int len;
    printf("Enter string to count length:");
    scanf("%s",&str1);
    len=strlen(str1);
    printf("\nLength of the string taht you entered is:%d",len);
}