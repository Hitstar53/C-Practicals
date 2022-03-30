#include<stdio.h>
void reverse(int n,int arr[n])
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp = *(arr+i);
        *(arr+i) = *(arr+n-1-i);
        *(arr+n-1-i) = temp;
    }
}
int main()
{
    int n,i;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elemets: ");
    for(i=0;i<n;i++)
        scanf("%d",(arr+i));
    reverse(n,arr);
    printf("After reversing elements: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}