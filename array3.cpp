#include<stdio.h>
int main()
{
    int arr[10] , i=0 , large ;
    printf("Enter index value %d  :",i);
    for( i=0; i < 10 ; i++)
     scanf("%d",&arr[i]);
        i=0;
        large=arr[i];
        while(i<10)
        {
            if(large<arr[i])
            large=arr[i];
            i++;
        }
        printf("%d",large);
    return 0;
}