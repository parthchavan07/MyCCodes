#include<stdio.h>
int main ()
{
    int  res , sum ;
    for (int i = 1 ; i <= 100 ; i++)
    {   
        for (int j=2 ; j<i ; j++)
        {
            if(i%j==0)
            {
                break;
            }

            else if (i==j+1)
            {
                printf("%d\n",i);
            }
        }
    }
        

return 0;
}