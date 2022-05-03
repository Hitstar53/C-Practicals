#include <stdio.h>
int partition(int sum, int largestNumber)
{
    if (largestNumber == 0)
        return 0;
    if (sum == 0)
        return 1;
    if (sum < 0)
        return 0;
    return printf("%d ",partition(sum, largestNumber - 1) + partition(sum - largestNumber, largestNumber));
}
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d", partition(n, n));
    return 0;
}