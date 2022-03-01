#include<stdio.h>
void word(int);
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    word(n);
    return 0;
}
void word(int n)
{
    int i,t,j,wor[50],ten,hun;

    char unit[][30] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char tens[][30] = {"", "", "twenty", "thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char powers[][30] = {"", "Thousand", "Million", "Billion", "Trillion"};

    t = n;
    for(i = 0; t > 0; i++)
    {
        wor[i] = t % 1000;
        t = t/1000;
    }
    for(j=i-1;j>=0;j--)
    {
        ten = wor[j] % 100;
        hun = wor[j] / 100;
        if (hun > 0 && ten > 0)
            printf("%s Hundred and ", unit[hun]);
        if (hun>0 && ten==0)
            printf("%s Hundred", unit[hun]);
        if (ten < 20)
            printf("%s ", unit[ten]);
        if (ten >= 20)
            printf("%s %s", tens[ten / 10], unit[ten % 10]);
        if (wor[j] > 0)
            printf("%s ", powers[j]);
    }
}