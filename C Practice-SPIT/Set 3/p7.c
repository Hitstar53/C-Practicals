#include<stdio.h>
#include<math.h>
int octtodec(int);
int dectooct(int);
int main()
{
    int oct,dec;
    printf("Enter the octal number: ");
    scanf("%d",&oct);
    printf("Enter the deimal number: ");
    scanf("%d",&dec);
    printf("The decimal equivalent of %d is %d\n", oct, octtodec(oct));
    printf("The octal equivalent of %d is %d", dec, dectooct(dec));
    return 0;
}
int octtodec(int oct)
{
    int dec=0,i,rem;
    for(i=0;oct!=0;i++)
    {
        rem=oct%10;
        dec+=rem*pow(8,i);
        oct=oct/10;
    }
    return dec;
}
int dectooct(int dec)
{
    int rem,oct=0,i;
    for(i=0;dec>8;i++)
    {
        rem = dec%8;
        oct += rem*pow(10,i);
        dec = dec/8;
    }
    oct += dec*pow(10,i);
    return oct;
}