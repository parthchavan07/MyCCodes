#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    printf("enter string :");
    scanf("%[^\n]*%c",&name);
    int count = 1;
    for(int i = 0 ; i <= strlen(name) ; i++)
    {
        if(name[i] == ' ')
        {
        count++;
        }  
    }
    printf("Total number of words in string is : %d",count);
    return 0;
}