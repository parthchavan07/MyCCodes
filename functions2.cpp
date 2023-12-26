#include<stdio.h>
int peri(int , int);
int main ()
{
    int length , width , sum ;
    printf("enter length : ");
    scanf("%d",&length);
    printf("Enter width : ");
    scanf("%d",&width);
    sum = peri(length,width);
    printf("perimeter of rectangle : %d",sum);
}
int peri(int length , int breadth)
{
    return 2*(length + breadth);
}