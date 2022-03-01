#include<stdio.h>
void cal(int *,int *,int *,int *,int *);
int main()
{
    int a,b,sum,diff,mul;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    cal(&a,&b,&sum,&diff,&mul);
    printf("Sum = %d\n",sum);
    printf("Difference = %d\n",diff);
    printf("Multiplication = %d\n",mul);
    return 0;
}
void cal(int *a,int *b,int *sum,int *diff,int *mul)
{
    *sum = *a + *b;
    *diff = *a - *b;
    *mul = *a * *b;
}