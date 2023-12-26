#include<stdio.h>
int main()
{
    char name[30] , gender;
    int id, age;
    printf("enter your name :");
    scanf("%[^\n]%*c",&name);
    printf("%s",name);
    printf("\nenter your age : ");
    scanf("%d",&age);
    printf("%d",age);
    printf("\nenter your gender :");
    scanf("%c",&gender);
    printf("%c ",gender);
    while ((getchar()) != '\n' );   // clears buffer memory
    printf("\nenter your id number : ");
    scanf("%d",&id);
    printf("%d ",id);
    return 0;
}