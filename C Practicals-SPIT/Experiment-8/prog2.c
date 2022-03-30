#include<stdio.h>
#include<string.h>
typedef struct flight
{
    char strt[4];
    char dest[4];
    int start;
    int arrival;
    int seats;
    int count;
}flight;
void reset(int n,flight f[n])
{
    for(int i=0;i<n;i++)
        f[i].count=0;
}
void input(int n,flight f[n])
{
    for(int i=0;i<n;i++)
    {
        printf("\nEnter start: ");
        scanf("%s", f[i].strt);
        printf("Enter destination: ");
        scanf("%s", f[i].dest);
        printf("Enter departure time: ");
        scanf("%d", &f[i].start);
        printf("Enter arrival time: ");
        scanf("%d", &f[i].arrival);
        printf("Enter number of seats: ");
        scanf("%d", &f[i].seats);
        f[i].count = 0;
    }
}
int main()
{
    int i,j,n,flag=1,temp=0,c=1,ns,nf;
    printf("How many records do you want to enter: ");
    scanf("%d",&n);
    flight f[n];
    input(n,f);
    char stp[4],des[4];
    do
    {
        printf("Enter your starting point: ");
        scanf("%s",stp);
        printf("Enter your destination: ");
        scanf("%s",des);
        printf("\nStart\tEnd\tSeats\n");
        for(i=0;i<n;i++)
        {
            if(strcmp(f[i].strt, stp) == 0 && strcmp(f[i].dest, des) == 0 && f[i].seats>0)
            {
                printf("%d\t%d\t%d\n", f[i].start, f[i].arrival, f[i].seats);
                f[i].count = c;
                c++;
                temp++;
            }
        }
        if(temp==0)
            printf("Sorry we do not have any available flights.");
        else
        {
            printf("Enter flight number: ");
            scanf("%d",&nf);
            printf("Enter no. of seats to be booked: ");
            scanf("%d",&ns);
            for(j=0;j<n;j++)
            {
                if(nf==f[j].count)
                {
                    if(f[j].seats - ns >= 0)
                    {
                        f[j].seats -= ns;
                        printf("Your flight has been booked succesfully!\n");
                        printf("Flight Details:\nSource: %s\nDestination: %s\n", f[j].strt, f[j].dest);
                        printf("Departure Time: %d\nArrival Time: %d", f[j].start, f[j].arrival);
                        printf("Seats: %d", ns);
                    }
                    else
                    {
                        printf("The flight does not have %d seats available", ns);
                        printf("\nPlease select a different flight.");
                    }
                }
            }
        }
        printf("\nEnter 1 to continue booking or 0 to exit: ");
        scanf("%d", &flag);
        reset(n,f);
    } while (flag==1);
    return 0;
}