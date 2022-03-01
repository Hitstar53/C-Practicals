#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,i,x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    printf("The Series is: ");
    for(i=0;i<=n;i++)
    {
        s+= pow(x,i);
        printf("%d ", (int)pow(x, i));
    }
    printf("\nSum of numbers is %d",s);
    return 0;
}