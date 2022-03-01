#include <stdio.h>
int main()
{
    int d = 1, n, t, f, l;
    printf("Enter a number:\n");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        n = n / 10;
        d = d * 10;
    }
    d = d / 10;
    f = t / d;
    l = t % 10;
    printf("The sum of first & last digits of %d = %d", t, f+l);
    return 0;
}