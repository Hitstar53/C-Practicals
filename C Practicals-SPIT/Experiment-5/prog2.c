#include <stdio.h>
int main()
{
    int n,i,j,k,count=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (k=0;k<10;k++)
    {
        count = 0;
        for (j=0;j<n;j++)
        {
            if (a[j] == k)
            {
                count++;
            }
        }
        if (count)
            printf("%d occurs %d times\n", k, count);
    }
    return 0;
}