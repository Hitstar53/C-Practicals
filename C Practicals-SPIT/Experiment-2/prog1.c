#include<stdio.h>
int main()
{
    int dec,bin,rem,c=1;

    printf("Enter a decimal number\n");
    scanf("%d", &dec);
    while (dec>0)
    {
        rem = dec % 2;
        dec = dec / 2;
        bin = bin + (rem * c);
        c *= 10;
    }
    printf("Binary equivalent = %d\n", bin);
    return 0;
}