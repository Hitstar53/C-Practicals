#include<stdio.h>
int main()
{
    int year,day,t;
    printf("Enter the year:\n");
    scanf("%d",&year);

    for(t=1900;t<year;t++)
    {
        if ((t%4==0 && t%100!=0) || t%400==0)
        day +=366;
        else
        day +=365;
    }
    day = day%7;

    if(day==0)
        printf("It was a Monday on 1st Jan, %d",year);
    else if(day==1)
        printf("It was a Tuesday on 1st Jan, %d", year);
    else if(day==2)
        printf("It was a Wednesday on 1st Jan, %d", year);
    else if(day==3)
        printf("It was a Thursday on 1st Jan, %d", year);
    else if(day==4)
        printf("It was a Friday on 1st Jan, %d", year);
    else if(day==5)
        printf("It was a Saturday on 1st Jan, %d", year);
    else if(day==6)
        printf("It was a Sunday on 1st Jan, %d", year);

    return 0;
}