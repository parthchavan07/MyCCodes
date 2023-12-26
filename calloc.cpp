#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *ptr, n;
     printf("enter value of n :");
     scanf("%d",&n);
     ptr = (int*) calloc(n , sizeof(int)); 
    for (int i = 0 ; i  <= n ; i++)
    {
          ptr[i] = i + 1;
    }
    for (int i = 0 ; i <n ; i++ )
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}