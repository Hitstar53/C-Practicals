#include <stdio.h>
#include <string.h>
typedef struct air
{
    char src[4];
    char des[4];
    int start;
    int arrive;
    int seats;
    int count;
} airline_t;
void reset(airline_t c[5])
{
    for (int i = 0; i < 5; i++)
        c[i].count = 0;
}
void input(airline_t c[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the source: ");
        scanf("%s", c[i].src);
        printf("Enter the destination: ");
        scanf("%s", c[i].des);
        printf("Enter the starting time: ");
        scanf("%d", &c[i].start);
        printf("Enter the arriving time: ");
        scanf("%d", &c[i].arrive);
        printf("Enter the number of seats: ");
        scanf("%d", &c[i].seats);
        c[i].count = 0;
    }
}
int main()
{
    int d = 1, temp = 0, n, flag = 0, seat;
    airline_t c[5];
    input(c);
    char source[4], dest[4];
    do
    {
        printf("\nEnter your source: ");
        scanf("%s", source);
        printf("Enter your destination: ");
        scanf("%s", dest);
        printf("\nStart\tEnd\tSeats\n");
        for (int i = 0; i < 5; i++)
        {
            if (strcmp(c[i].src, source) == 0 && strcmp(c[i].des, dest) == 0 && c[i].seats > 0)
            {
                printf("%d\t%d\t%d\n", c[i].start, c[i].arrive, c[i].seats);
                c[i].count = d;
                d++;
                temp++;
            }
        }
        if (temp == 0)
        {
            printf("\nSorry we dont have any flights available");
        }
        else
        {
            printf("Enter the number of flight you want to take: ");
            scanf("%d", &n);
            printf("Enter the number of seats you want to book: ");
            scanf("%d", &seat);
            for (int i = 0; i < 5; i++)
            {
                if (n == c[i].count)
                {
                    if (c[i].seats - seat >= 0)
                    {
                        c[i].seats -= seat;
                        printf("Your flight has been booked for %s to %s", c[i].src, c[i].des);
                        printf("\nTimings are follows: %d to %d", c[i].start, c[i].arrive);
                        printf("\nNo of seats remaining: %d", c[i].seats);
                    }
                    else
                    {
                        printf("The flight does not have %d seats available", seat);
                        printf("\nPlease select a different flight.");
                    }
                }
            }
        }
        printf("\nEnter 0 to continue booking or any other number to exit: ");
        scanf("%d", &flag);
        reset(c);
    } while (flag == 0);
    return 0;
}