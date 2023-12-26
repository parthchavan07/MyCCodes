#include<stdio.h>
int main()
{
    char name[30];
    printf("enter pizza name : ");   
    scanf("%[^\n]%*c",name);
    printf(" you have ordered %s pizza ",name);
    return 0;
}