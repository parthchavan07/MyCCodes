#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    int i, t, c, num , res , sum, par,saee ;
    i=1;
    sum=0;
    c=0;
    
    printf("enter number : ");
    scanf("%d",&num);
    saee=num;
    t=num;
    while(t>0)
    {
        t = t/10;
        c++;
    }
    while(i<=c)
    {
        res=num % 10;
        sum =abs(pow(res,c))+sum;
        num =num / 10;
        i++;
    }
    if(sum==saee)
    {
        printf("number is armstrong ");
    }
    else{
        printf("not armstrong ");
    }
    return 0;
}