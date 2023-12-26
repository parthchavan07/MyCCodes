#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main()
{
    int randomVaule;
    srand(time(NULL));
    randomVaule = rand() % 6 +1;
    printf(".......rolling dice.......\n");
    usleep(900000);
    printf("%d",randomVaule);
    return 0;
}