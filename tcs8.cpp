#include<stdio.h>
int main()
{
    char n,p;
    scanf("%c %c",&n,&p);
    int temp,temp2,sum;
    char arr[9]={"TH","GA","IC","HA","TE","LU","NI","CA",'\0'};
    int arr2[8]={800,600,750,900,1400,1200,1100,1500};
    for(int i=0;i<8;i++)
    {
        if(n==arr[i])
        {
            temp=i;
        }
        else if(p==arr[i])
        {
            temp2=i;
        }
    }
    if(arr2[temp]>arr2[temp2])
    {
        sum=arr2[temp]-arr2[temp2];
    }
    else
    {
        sum=arr2[temp2]-arr2[temp];
    }
    printf("%d",sum);
    return 0;
}
