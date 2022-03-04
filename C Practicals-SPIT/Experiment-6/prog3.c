#include<stdio.h>
void print_mat(int m, int n, int mat[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
int main()
{
    int m,n,i,j;
    printf("Enter dimensions of the matrix:\n");
    scanf("%d %d",&m,&n);
    int det[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&det[i][j]);
    }
    print_mat(m,n,det);
    return 0;
}