#include<stdio.h>
void print_mat(int n, int mat[n][n])
{
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
void cofact(int n, int mat[n][n], int cof[n-1][n-1], int r, int c)
{
    int i=0,j=0;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n;col++)
        {
            if(row!=r && col!=c)
            {
                cof[i][j++] = mat[row][col];
                if(j==n-1)
                {
                    j=0;
                    i++;
                }
            }
        }
    }
}
int det_matrix(int n, int det[n][n])
{
    int d=0;
    if(n==1)
        return det[0][0];
    int cof[n][n];
    int sign=1;
    for(int j=0;j<n;j++)
    {
        cofact(n,det,cof,0,j);
        d += sign*det[0][j]*det_matrix(n-1,cof);
        sign = -sign;
    }
    return d;
}
int main()
{
    int n,i,j;
    printf("Enter dimension of the matrix:\n");
    scanf("%d",&n);
    int det[n][n];
    printf("Enter Elements of Matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&det[i][j]);
    }
    printf("Entered Matrix:\n");
    print_mat(n,det);
    if(det_matrix(n,det)==0)
        printf("This matrix is singular\n");
    else
        printf("This matrix is not singular\nDeterminant = %d",det_matrix(n,det));
    return 0;
}