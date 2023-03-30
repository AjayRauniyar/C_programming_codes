#include<stdio.h>
int main()
{
    int year;
    printf("enter  a year :");
    scanf("%d ",&year);
    if (year%4 == 0)
    {
        /* code */ printf("the year %d is leap year ",year);

    }
    else
    {
        printf("the year %d is not a leap year ",year);

    }

    return 0;

    

}