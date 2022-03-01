#include <stdio.h>
int main()
{
    int a, b, c, d;
    for(a=10;a<100;a++)
    {
        for(b=10;b<100;b++)
        {
            c = (10 * (a % 10)) + a / 10;
            d = (10 * (b % 10)) + b / 10;

            if ((a*b == c*d)&&(c!=a)&&(b!=d)&&(c!=b)&&(d!=a))
            {
                printf("%d*%d = %d*%d\n", a, b, c, d);
            }
        }
    }
}