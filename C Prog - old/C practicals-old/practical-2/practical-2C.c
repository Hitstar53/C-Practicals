#include <stdio.h>
int main()
{
    float income, tax = 0;
    printf("Enter your income:\n");
    scanf("%f", &income);

    if (income <= 100000)
        printf("Income tax payable is: Rs %.2f", tax);
    else if (income >= 100001 && income <= 500000)
    {
        tax = 1000 + (income - 100000) * 0.1;
        printf("Income tax payable is: Rs %.2f", tax);
    }
    else if (income >= 500001 && income <= 800000)
    {
        tax = 5000 + (income - 500000) * 0.2;
        printf("Income tax payable is: Rs %.2f", tax);
    }
    else if (income > 800000)
    {
        tax = 10000 + (income - 800000) * 0.3;
        printf("Income tax payable is: Rs %.2f", tax);
    }
    return 0;
}
