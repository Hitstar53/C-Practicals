#include<stdio.h>
int ack(int,int);
int main()
{
    int n, m, i, j;
    printf("Enter range(m,n)\n");
    scanf("%d %d", &m, &n);
    printf("Ackermann series:\n");
    printf("m,n      m=1          m=2           m=3\n");
    for (i = 1; i <= n; i++)
    {
        if(i>=10)
            printf("n=%d   ", i);
        else
            printf("n=%d    ", i);
        for (j = 1; j <= m; j++)
        {
            if(ack(j,i)>=10 && i<10)
                printf("A(%d,%d)=%d    ", j, i, ack(j, i));
            else if(ack(j, i)>=10 && i>=10)
                printf("A(%d,%d)=%d   ", j, i, ack(j, i));
            else
                printf("A(%d,%d)=%d     ", j, i, ack(j, i));
        }
        printf("\n");
    }
    return 0;
}
int ack(int m,int n)
{
    if(m==0)
        return n+1;
    else if(n==0 && m!=0)
        return ack(m-1,1);
    else if(m!=0 && n!=0)
        return ack(m-1,ack(m,n-1));
}