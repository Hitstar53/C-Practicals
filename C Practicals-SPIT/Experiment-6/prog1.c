#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter number of rows and columns\n");
    scanf("%d %d",&m,&n);
    int i,j;
    int mat1[m][n],mat2[m][n],mat3[m][n];
    printf("Enter first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&mat1[i][j]);
    }
    printf("Enter the second matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&mat2[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        mat3[i][j] = mat1[i][j] + mat2[i][j];
    }
    printf("Added Result Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}