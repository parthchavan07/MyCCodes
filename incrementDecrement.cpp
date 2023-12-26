#include<stdio.h>
#include<unistd.h>
int main()
{
    int i = 1 , j = 3 , m = 4;
    int k;
    k = i + ++i + i++ + j + ++j + i + m;
    printf("%d",k);
    return 0;
}