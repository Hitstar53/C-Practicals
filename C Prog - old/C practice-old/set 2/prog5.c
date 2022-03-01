#include<stdio.h>
int main()
{
    int r,rev=0,n,t;
    printf("Enter a 5-digit Number:\n");
    scanf("%d", &n);

    t = n;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if(t==rev)
    printf("The reverse number of %d is: %d\nIts a Palindrome!", t, rev);
    else
    printf("The reverse number of %d is: %d\nIts not a Palindrome!", t, rev);
    return 0;
}