#include<stdio.h>
int main()
{
    int arr[100],rev[100];
    int n,i,j,temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        arr[i] = temp;
    }
    for(i=0;i<n;i++)
    {
        rev[i] = arr[n-i-1];
    }
    printf("The array in reverse order is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",rev[i]);
    }
    return 0;
}