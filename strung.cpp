#include<stdio.h>
#include<string.h>
int main()
{
     char name[13]="parth chavan";
     for(int i=0;i<13;i++)
     {
        printf("%[^\n]%*c",name[i]);
     }
    return 0;
}