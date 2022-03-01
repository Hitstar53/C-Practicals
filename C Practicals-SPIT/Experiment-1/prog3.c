#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 2 angles:\n");
    scanf("%d %d",&a,&b);
    c = 180-a-b;
    if(a+b+c == 180 && a>0 && b>0 && c>0)
        printf("The third angle = %d", c);
    else
        printf("Invalid angles! Please try again!");
    return 0;
}