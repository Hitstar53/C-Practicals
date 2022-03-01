#include <stdio.h>
#include <math.h>
int main()
{
    int prime, i, n, count;
    printf("Prime Numbers from 1 to 300 are:\n");

    for (n = 2; n <= 300; n++)
    {
        count = sqrt(n);
        prime = 1;
        for (i = 2; i <= count; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
            printf("%d ", n);
    }
    return 0;
}