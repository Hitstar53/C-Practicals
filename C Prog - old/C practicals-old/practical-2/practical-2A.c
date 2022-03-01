#include <stdio.h>
int main()
{
    float amt;
    printf("Enter the Agent's Amount:\n");
    scanf("%f", &amt);
    if (amt < 10000)
    {
        printf("The commission is %.2f", (amt * 0.1));
    }
    else
    {
        if (amt >= 10000 && amt <= 50000)
            printf("The commission is %.2f", (amt * 0.15));
        else
            printf("The commission is %.2f", (amt * 0.2));
    }
    return 0;
}
