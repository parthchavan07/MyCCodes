#include<stdio.h>
double Avg( int , float[] , float , double);
double Avg(int i , float numbers[] , float sum , double avvg )
{
    sum =0;
      for(i=0 ; i<5 ; i++)
      {
         sum = sum + numbers[i];
      }
      avvg = sum / 5;
      return avvg;
}
int main ()
{
    int i ;
    float sum;
    double  avvg;
    float num[5]={500.4 , 100.4 , 78.45 , 55.4, 98.955};
    double par = Avg( i , num , sum , avvg );
    printf("%.3f",par);
}
