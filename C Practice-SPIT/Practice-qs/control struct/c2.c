#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("Enter no. of items: ");
    scanf("%d",&n);
    float bill[n][2];
    float sum=0,tax;
    printf("Enter price and qnty of each item:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&bill[i][0],&bill[i][1]);
        sum += bill[i][0]*round(bill[i][1]);
    }
    printf("------------BILL------------\n");
    printf("Item\tCost\tQty\tTotal\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%.2f\t%d\t%.2f\n",i+1,bill[i][0],bill[i][1], bill[i][0]*round(bill[i][1]));
    }
    tax = sum*0.1;
    sum *= 1.1;
    printf("Service Charge = %.2f\nTotal Amount = %.2f",tax,sum);
    return 0;
}