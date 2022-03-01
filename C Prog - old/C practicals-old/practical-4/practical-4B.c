#include <stdio.h>
#include <math.h>
int prime(int);
int main()
{
    int n, p;
    printf("Enter a number:\n");
    scanf("%d", &n);
    p = prime(n);
    if (p == 1)
        printf("%d is not a prime number", n);
    else
        printf("%d is a prime number", n);
}

int prime(int n)
{
    int i;
    if (n == 1)
        return 1;
    else if (n > 1)
    {
        for (i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 1;
        }
    }
    return 0;
}