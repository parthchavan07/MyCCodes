#include<stdio.h>
int main()
{
    int TotalVehicles;
    printf("Enter Total number of vehicles :");
    scanf("%d",&TotalVehicles);
    int TotalWheels;
    printf("Enter Total number of wheels :");
    scanf("%d",&TotalWheels);
    int temp,count=0,count2=0,temp2,res,res2,res3;
    temp=TotalWheels;
    int arr[2]={2 , 4};
    while(TotalWheels>0)
{
        for(int i = 0 ; i <= 1 ; i++ )
        {
            TotalWheels=TotalWheels-arr[i];
            if(TotalWheels + 2 == temp)
                count++;
            else if(TotalWheels + 4 == temp)
                count2++;
            temp=TotalWheels;
        }
}
temp2=count;
   while(count+count2!=TotalVehicles)
    {
            count++;
    }
    res=count-temp2;
    res2=count2-res;
    res3=count+res;
    printf("TW=%d\nFW=%d",res3 ,res2);
    return 0;
}

