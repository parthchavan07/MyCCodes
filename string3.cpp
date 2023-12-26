#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    int count=0;
    int temp=0;
    int count2 =0;
    printf("enter your string :");
    scanf("%[^\n]*%c",name);
   for(int i = 0 ; i <= strlen(name) ; i++)
    {  
       if(name[i] == ' ')
       {
        temp++;
       }
    }
   for(int i = 0 ; i <= strlen(name) ; i++)
    {  
       if(name[i] == ' ')
       {
        count++;
       }
       if(count == temp)
        {
            printf("%c", name[i]);
        }
     }
   for(int i = 0 ; i <= strlen(name) ; i++)
    {
        if(name[i] == ' ')
        {
            count2++;
        }
        if(count2 < temp)
        {
            printf("%c",name[i]);
        }
    }
    return 0;
}