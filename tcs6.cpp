#include<stdio.h>
int main()
{
	int t,sum,large;
	scanf("%d",&t);
	int E[t];
	int L[t];
	for(int i =0 ;i<t;i++)
	{
		scanf("%d",&E[i]);
	}
	for(int i =0 ;i<t;i++)
	{
		scanf("%d",&L[i]);
	}
	int temp[t-1];
	for(int i=0 ;i<t;i++)
	{
		sum=E[i]-L[i];
		E[i+1]=E[i+1]+sum;
		temp[i]=sum;
	}
	int k=0;
	  large=temp[k];
    for(;k<t;k++)
    {
       int i=0;
        while(i<=t)
        {
            if(large<temp[k+1])
            {
            large=temp[k];
            }
            i++;
        }
    }
    printf("%d",large);
    return 0;
}