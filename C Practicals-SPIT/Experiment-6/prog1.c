#include <stdio.h>
#include <math.h>
void add_mat(int m, int n, int mat1[m][n], int a, int b, int mat2[a][b])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",mat1[i][j]+mat2[i][j]);
        printf("\n");
    }
}
void sub_mat(int m, int n, int mat1[m][n], int a, int b, int mat2[a][b])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",mat1[i][j]-mat2[i][j]);
        printf("\n");
    }
}
void print_mat(int m,int n,int mat[m][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",mat[i][j]);
        printf("\n");
    }
}
void zero_mat(int m, int n,int mat[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            mat[i][j] = 0;
    }
}
void mul_mat(int m, int n, int mat1[m][n], int a, int b, int mat2[a][b])
{
    int mat3[m][b];
    zero_mat(m,b,mat3);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<b;j++)
        {
            for(int k=0;k<n;k++)
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
        }
    }
    print_mat(m,b,mat3);
}
void trans_mat(int m,int n, int mat[m][n])
{
    int mat3[n][m];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
            mat3[i][j] = mat[j][i];
    }
    print_mat(n,m,mat3);
}
int frob_norm(int m,int n,int mat[m][n])
{
    float fr=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            fr+= mat[i][j] * mat[i][j];
    }
    return fr;
}
int main()
{
    int m, n, a, b, i, j;
    printf("Enter dimensions of Matrix 1:\n");
    scanf("%d %d", &m, &n);
    int mat1[m][n];
    printf("Enter elements of Matrix 1:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &mat1[i][j]);
    }
    printf("Enter dimensions of Matrix 2:\n");
    scanf("%d %d", &a, &b);
    int mat2[a][b];
    printf("Enter elements of Matrix 2:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &mat2[i][j]);
    }
    if(m==a && n==b)
    {
        printf("Additon of Matrices:\n");
        add_mat(m, n, mat1, a, b, mat2);
        printf("Subtraction of Matrices:\n");
        sub_mat(m, n, mat1, a, b, mat2);
    }
    else
        printf("Dimensions should be the same for addition & subtraction\n");
    if(n==a)
    {
        printf("Multiplication of Matrices:\n");
        mul_mat(m, n, mat1, a, b, mat2);
    }
    else
        printf("Multiplication is not possible");
    printf("Transpose of Matrix 1:\n");
    trans_mat(m, n, mat1);
    printf("Transpose of Matrix 2:\n");
    trans_mat(a, b, mat2);
    printf("Frobenius Norm of Matrix 1 = %f\n",sqrt(frob_norm(m,n,mat1)));
    printf("Frobenius Norm of Matrix 2 = %f\n",sqrt(frob_norm(a,b,mat2)));
    return 0;
}