#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int *ptr,n;
     printf("enter value of n :");
     scanf("%d",&n);
     ptr = (int*) malloc(n * sizeof(int));
    for (int i = 0 ; i  <= n ; i++)
    {
          ptr[i] = i + 1;
    }
    for (int i = 0 ; i <n ; i++ )
    {
        printf("%d\n",ptr[i]);
    }
   int p , NewSize;
    printf("\n enter more amount of value : ");
    scanf("%d",&p);
    NewSize = p + n;
    ptr = (int*) realloc(ptr ,NewSize * sizeof(int));
    for(int i =0 ; i <NewSize ; i++)
    {
        ptr[i] =i + 1; 
    }
    for (int i =0 ; i < NewSize ; i++)
    {
        printf("%d\n",ptr[i]);
    }
        free(ptr);
    return 0;
}