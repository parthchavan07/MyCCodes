#include<stdio.h>
#define PI 3.14
int main()
{
    float Radius;
    float area;
    printf("Enter radius : ");
    scanf("%f",&Radius);
    area=PI * Radius * Radius;
    printf("Area of circle is : %.2f",area);
    return 0;
}