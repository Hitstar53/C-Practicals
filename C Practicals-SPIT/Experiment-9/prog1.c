#include<stdio.h>
void swap(int n,int arr[n])
{
    int min=0,max=0,i,temp;
    for(i=0;i<n;i++)
    {
        if(*(arr+i)>*(arr+max))
            max=i;
        if(*(arr+i)<*(arr+min))
            min=i;
    }
    temp = *(arr+max);
    *(arr+max) = *(arr+min);
    *(arr+min) = temp;
}
int main()
{
    int n,i;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    swap(n,arr);
    printf("After swapping min and max elements:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}