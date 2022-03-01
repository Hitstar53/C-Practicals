#include<stdio.h>
int main()
{
    int b[10],i,dec;
    printf("Enter a decimal:\n");
    scanf("%d",&dec);
    
    for(i=0;dec>0;i++)
    {
        b[i] = dec%2;
        dec = dec/2;
    }
    
    printf("Binary equivalent = ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",b[i]);
    }
    return 0;
}