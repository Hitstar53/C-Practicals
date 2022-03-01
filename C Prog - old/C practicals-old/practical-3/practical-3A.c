#include <stdio.h>
int main()
{
    int f = 1, n, i;
    printf("Enter a number\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    printf("Factorial of %d is = %d", n, f);
    return 0;
}
