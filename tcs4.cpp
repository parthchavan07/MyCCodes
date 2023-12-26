#include<stdio.h>
int main()
{
    int r , c ,count=0,large=0;
    scanf("%d\n%d",&r,&c);
    int arr[r] [c];
    for(int i=0 ; i < r ; i++)
    {
         for(int j=0 ; j < c;j++)
         {
            scanf("%d",&arr [i] [j]);
         }
    }
    int temp[r];
    for(int i=0 ; i < r ; i++)
    {
         for(int j=0 ; j < c;j++)
         {
            if(arr[i][j] == 1)
            {
                count++;
            }
         }
         temp[i]=count;
         count=0;    
    }
    for(int k=0;k<r;k++)
    {
       int i=0;
        while(i<r)
        {
            if(large<temp[k])
            large=k+1;
            i++;
        }
    }
    printf("%d",large);
    return 0;
}