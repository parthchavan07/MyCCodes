#include<stdio.h>
int main()
{
    int a ,sum;
    scanf("%d",&a);
    char n='*';
    for(int i=0;i<a;i++)
    {
        printf("%c",n);
    }
    printf("\n");
    for(int i=1;i<=a;i++)
    {
        if(i==1 | i==a)
        {
            printf("%c",n);
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
    for(int i=0;i<a;i++)
    {
        printf("%c",n);
    }
    printf("\n");
    sum=a/2;
    for(int i=1;i<=a;i++)
    {
        if(i-1==sum)
        {
            printf("%c",n);
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
    for(int i=1;i<=a;i++)
    {
        if(i-1==sum)
        {
            printf("%c",n);
        }
        else{
            printf(" ");
        }
    }
    return 0;
}