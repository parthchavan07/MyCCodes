#include<stdio.h>
int par (int, int);  // function declaration or function prototype
int main()
{
   int sum= par(5,6);         //call function
   printf("%d",sum);
    return 0;
}
int par(int num1 , int num2)               // function defination
     {                                      
        return num1 + num2;;
     }