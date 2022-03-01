#include<stdio.h>
int ack(int m, int n);
int main()
{
    int m, n, i = 1, j = 1;
    printf("Enter the value of m.\n");
    scanf("%d", &m);

    printf("Enter the value of n.\n");
    scanf("%d", &n);

    while (j <= n)
    {
        i=1;
        while (i <= m)
        {
            if (i < m)
            {
                printf("A(%d,%d)=%d\t", i, j, ack(i, j));
            }
            else if (i == m)
            {
                printf("A(%d,%d)=%d \n", i, j, ack(i, j));
            }

            i++;
        }
        j++;
    }
    return 0;
}

int ack(int m, int n)
{
    if (m == 0)
        return n + 1;
    else if (m != 0 && n == 0)
        return ack(m - 1, 1);
    else
        return ack(m - 1, ack(m, n - 1));
}