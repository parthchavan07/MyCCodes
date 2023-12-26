#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a=0,b=0;
    char arr [1000];
    scanf("%s",arr);
    
    for(int i=0; i!='*'&&'#';i++)
    {
        if(arr[i] == '*')
        {
        a++;
        }
        else if(arr[i]=='#')
        {
        b++;
        }
    }
    int sum;
    sum=a-b;
    printf("%d",sum);
    return 0;
}