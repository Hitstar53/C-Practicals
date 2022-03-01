#include<stdio.h>
int cube(int *);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    cube(&num);
    printf("Cube is = %d", num);
    return 0;
}
int cube(int *num)
{
    *num = *num * *num * *num;
    return *num;
}