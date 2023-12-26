#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*) malloc(4 * sizeof(int));
    for (int i = 0 ; i < 10 ; i++)
    {
        printf("%d\n",ptr[0]);
    }
    ptr = (int*) calloc(4 , sizeof(int));
    for (int i = 0 ; i < 10 ; i++)
    {
        printf("%d\n",ptr[0]);
    }
    return 0;
}