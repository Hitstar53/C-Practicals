#include<stdio.h>
int main()
{
    int n,count=1,flag=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]!=b[j])
                flag=1;
            else
            {
                flag=0;
                break;
            }

        }
        if(flag)
        {
            b[count]=a[i];
            count++;
        }
    }
    printf("Array without repetitions: ");
    for(int i=0;i<count;i++)
        printf("%d ",b[i]);
    return 0;
}