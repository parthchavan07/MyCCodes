#include<stdio.h>
#include<string.h>
union Employee
{
    int id;
    char name[20];
    float salary;
};
int main()
{
    union Employee e1;
    e1.id = 101;
    strcpy(e1.name,"parth");
    e1.salary = 35000;
    printf("Id is %d\nName is %s\nSalary is %.2f\n",e1.id , e1.name , e1.salary);
    printf(".........2nd employee........\n");
    union Employee e2;
    e2.id = 102;
    strcpy(e2.name,"Dheeraj");
    e2.salary = 45000;
    printf("Id is %d\nName is %s\nSalary is %.2f",e2.id , e2.name , e2.salary);
}