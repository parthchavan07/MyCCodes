#include<stdio.h>
void passBy (int *);
int main()
{
    int x =10 ;
    int num;
    printf("%d\n",x);
    passBy(&x);
    printf("%d",x);
    return 0;
}
void passBy(int *num){
    (*num)++;
}