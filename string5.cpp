#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    scanf("%s",name);
    for(int i=0;name[i]!='\0';i++)
    {
       printf("%c",name[i]);
    }
    return 0;
}