#include<stdio.h>
int main ()
{
    long scoreOne[5];
    for (int  i = 0; i < 5 ; i++)
    {
        printf("enter numbers %d : ",i);
        scanf("%ld",&scoreOne[i]); 
    }
    printf("printing all values ");
     for(int i = 0 ; i < 5 ; i++)
     {
        printf("\nnumber enter %d:\n",scoreOne[i]);
     }
    
    return 0;
}