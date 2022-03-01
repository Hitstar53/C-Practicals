#include<stdio.h>
int main()
{
    int days,months,years,weeks;
    printf("Enter the number of days:\n");
    scanf("%d",&days);
    years = days/365;
    days = days%365;
    months = days/30;
    days = days%30;
    weeks = days/7;
    days = days%7;
    printf("%d years %d months %d weeks %d days",years,months,weeks,days);
    return 0;
}