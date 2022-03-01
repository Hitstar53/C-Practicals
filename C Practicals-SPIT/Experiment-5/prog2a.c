#include<stdio.h>
void selectionsort(int a[], int n);
void swap(int *, int *);
int main()
{
    int n, i,count,j;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    selectionsort(a, n);
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[i+1])
            {
                count++;
                i++;
            }
        }
        printf("%d occurs %d times\n",a[i],count);
    }
    return 0;
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