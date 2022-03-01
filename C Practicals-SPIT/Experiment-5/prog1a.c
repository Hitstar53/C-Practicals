#include<stdio.h>
void selectionsort(int a[],int n);
void swap(int *,int *);
void selectionsort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min = j;
        }
        swap(&a[min],&a[i]);
    }
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}