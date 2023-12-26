#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    int result, count=0;
    printf("Enter no. of houses :");
    scanf("%d",&n);
    long Houses[n];
    for(int i =0 ; i < n ; i++)
    {
        printf("Enter number %d house price :",i+1);
        scanf("%ld",&Houses[i]);
        if(Houses[i]<0)
        {
        printf(".....You have entered negative value.....\nRun again");
        return 0;
        }
    }
    for(int i =0 ; i<n-1 ; i++)
    {
        for(int j =i+1; j<n ;j++)
        {
            if(Houses[j]<Houses[i])
            {
                int temp=Houses[j];
                Houses[j]=Houses[i];
                Houses[i]=temp;
            }
        }
    }
    long money;
    printf("Enter how much money you have :");
    scanf("%ld", &money);
    for(int i = 0 ; i <= n ; i++)
        { 
           
            result = money - Houses[i];
            money=result;
            if(money>=0)
            {
               count++;
            }
        }
     printf("you can buy %d houses ",count);
    return 0;
}