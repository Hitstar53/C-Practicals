#include<stdio.h>
void print_emp(int n, int emp[n][2])
{
    printf("Ret Year    Emp No.\n");
    for (int i=0;i<n;i++)
    {
        if (i!= 0 && emp[i][0]==emp[i-1][0])
            printf("            %d\n", emp[i][1]);
        else
            printf("%d        %d\n", emp[i][0], emp[i][1]);
    }
}
void selectionsort(int n, int emp[n][2])
{
    int min,temp1,temp2;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (emp[j][0] < emp[min][0])
            {
                min = j;
            }
        }
        temp1 = emp[min][0];
        emp[min][0] = emp[i][0];
        emp[i][0] = temp1;
        temp2 = emp[min][1];
        emp[min][1] = emp[i][1];
        emp[i][1] = temp2;
    }
    print_emp(n,emp);
}
int main()
{
    int cy,n,i,j,ra;
    printf("Enter the Current Year:\n");
    scanf("%d",&cy);
    printf("Enter Retirement Age:\n");
    scanf("%d", &ra);
    printf("Enter number of entries:\n");
    scanf("%d",&n);
    int ret_emp[n][2];
    for(i=0;i<n;i++)
    {
        printf("Enter Employee number & current age: ");
        scanf("%d %d", &ret_emp[i][1], &ret_emp[i][0]);
        ret_emp[i][0] = cy + ra - ret_emp[i][0];
    }
    selectionsort(n,ret_emp);
    return 0;
}