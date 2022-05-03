#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float op,sp;
    printf("Enter no. of items: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter price of item %d: ",i);
        scanf("%f",&op);
        sp = op - op/10;
        sp = round(sp);
        sp = sp - 0.01;
        if(op>sp)
            printf("Sale price = %.2f\n",sp);
        else
            printf("Sale price = %.2f\nWarning: Sale price more than original price!\n",op);
    }
    return 0;
}