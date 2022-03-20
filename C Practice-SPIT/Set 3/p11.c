#include<stdio.h>
int reverse(int);
int main()
{
    int num;
    printf("Enter the number to be reversed:\n");
    scanf("%d",&num);
    printf("Reversed number: %d",reverse(num));
    return 0;
}
int rev=0,r;
int reverse(int n)
{
    if(n>0)
    {
        r = n%10;
        rev = rev*10 + r;
        reverse(n/10);
    }
    else
        return rev;
    return rev;
}