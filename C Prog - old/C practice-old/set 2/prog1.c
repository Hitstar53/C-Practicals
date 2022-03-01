#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter Cost Price & Selling Price:\n");
    scanf("%f %f",&cp, &sp);

    if (cp > sp)
      printf("Loss incurred = Rs %.2f",cp-sp);
    else
      printf("Profit Gained = Rs %.2f", sp - cp);
    return 0;
}