#include<stdio.h>
int par(int , int);
int main()
{
  int num , factorial ;
    int res = par(num , 5 );
    printf("factorial is : %d",res);
    return 0;
}
int par(int num , int factorial )
{
  num =5;
    if(num>0)
    {
      factorial = factorial * num;
      --num;
      return factorial;
    }
    else
    {
      return 1;
    }
}