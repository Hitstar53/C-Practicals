#include<stdio.h>
void selectionsort(int a[], int n);
void swap(int *, int *);
void binarysearch(int a[],int n,int key);
int main()
{
    int n, i,key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    selectionsort(a, n);
    printf("Which element do you want to search?\n");
    scanf("%d", &key);
    binarysearch(a,n,key);
    return 0;
}
void binarysearch(int a[],int n,int key)
{
    int low = 0, high = n-1, mid;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(a[mid] == key)
        {
            printf("%d is found at index %d\n", key, mid+1);
            return;
        }
        else if(a[mid] > key)
            high = mid-1;
        else
            low = mid+1;
    }
    printf("%d is not found\n", key);
}
void selectionsort(int a[], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        swap(&a[min], &a[i]);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}