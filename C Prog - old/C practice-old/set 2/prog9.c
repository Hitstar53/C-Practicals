#include<stdio.h>
int main()
{
    int l,b,p,a;
    printf("Enter length & breadth of rectangle:\n");
    scanf("%d %d",&l, &b);

    a = l*b;
    p = 2*(l+b);

    if(p>a)
    printf("The rectangle's perimeter is greater than its area!");
    else if(p==a)
    printf("The rectangle's area is equal to its perimeter!");
    else
    printf("The rectangle's area is greater than its perimeter!");

    return 0;
}