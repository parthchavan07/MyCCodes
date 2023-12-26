#include<stdio.h>
int  prime(int, int, int);
int main()
{
      int sum , num , count , i ;
      printf("enter number : ");
      scanf("%d",&num);

      sum =prime(num , count , i );
    if (sum == 2 )
    {
        printf("number is prime  ");
    }
    else
    {
        printf("number is not prime ");
    }
     
    
}

int  prime(int num , int count  , int i )
{
count =0 ;
      for(i=1 ; i <= num ; i++)
      {  
        if(num % i == 0)
        count++;
      }
      return count;
}