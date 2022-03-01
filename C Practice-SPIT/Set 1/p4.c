#include <stdio.h>
#include <math.h>
int main()
{
    int prime,i,n,r;
    printf("Enter the Range:\n");
    scanf("%d",&r);
    printf("Prime Numbers from 1 to %d are:\n",r);

    for (n = 2; n <= r; n++)
    {
        prime = 1;
        for (i = 2; i <= sqrt(n); i++)
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