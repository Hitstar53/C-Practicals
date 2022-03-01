#include<stdio.h>
#include<math.h>
#define min(X, Y) (((X) < (Y)) ? (X) : (Y));
int mincoins(int *,int,int);
int main()
{
    int c[10],amt,n,min;
    printf("Enter number of set values:\n");
    scanf("%d",&n);
    printf("Enter %d set values:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&c[i]);
    printf("Enter the amount:\n");
    scanf("%d",&amt);
    printf("Minimum number of coins required: %d",mincoins(c,n,amt));
    return 0;
}
int mincoins(int c[], int n,int amt)
{
    if (amt == 0)
        return 0;
    int res = __INT_MAX__;
    for (int i = 0; i < n; i++)
    {
        int sub=0;
        if (amt >= c[i])
        {
            sub = 1 + mincoins(c,n, amt - c[i]);
            res = min(res, sub);
        }
    }
    if (res == __INT_MAX__)
        return -1;
    return res;
}