#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    char arr[n];
    char arr2[n];
    for(int i=0;i<n;i++)
    {
        scanf("%c ",&arr[i]);
        arr2[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr2[i]==arr[j])
            {
                count++;
            }
        }
        if(count%2!=0)
        {
            printf("%c",arr[i]);
        }
    }
    return 0;
}