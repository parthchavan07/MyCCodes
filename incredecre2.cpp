#include<stdio.h>
int main()
{
    int age =10;
    printf("%d\n",++age);
    printf("%d\n",age );
    printf("%d\n",++age);
    printf("%d\n",age++ + ++age);
    printf("%d",age);
    return 0;
}