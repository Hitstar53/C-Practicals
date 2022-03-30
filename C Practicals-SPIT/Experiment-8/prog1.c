#include<stdio.h>
typedef struct family
{
    char wifename[20];
    int nc;
    char childnames[10][20];
}family;
typedef union details
{
    family f;
    char hobby[30];
}details;
typedef struct member
{
    char name[30];
    char adr[30];
    char active,married;
    int age;
    details det;
}member;
void input(int n, member m[n])
{
    for (int i=0;i<n;i++)
    {
        printf("\nEnter the name of the member: ");
        scanf(" %s", m[i].name);
        printf("Enter the age: ");
        scanf("%d", &m[i].age);
        printf("Enter the address: ");
        scanf(" %[^\n]s", m[i].adr);
        printf("Enter Active status (y/n): ");
        scanf(" %c", &m[i].active);
        printf("Enter Marital Status (y/n): ");
        scanf(" %c", &m[i].married);
        if (m[i].married == 'y')
        {
            printf("Enter name of the wife: ");
            scanf(" %s", m[i].det.f.wifename);
            printf("Enter the number of children: ");
            scanf("%d", &m[i].det.f.nc);
            for (int j=0;j<m[i].det.f.nc;j++)
            {
                printf("Enter name of the children: ");
                scanf(" %s", m[i].det.f.childnames[i]);
            }
        }
        else
        {
            printf("Enter the hobby of the member: ");
            scanf(" %[^\n]s", m[i].det.hobby);
        }
    }
}
int main()
{
    int i,n;
    printf("How many records do you want to enter: ");
    scanf("%d",&n);
    member m[n];
    input(n,m);
    printf("\nActive players and their wives' records:\n");
    printf("Name\tWife\n");
    for(i=0;i<n;i++)
    {
        if (m[i].active == 'y' && m[i].married == 'y')
            printf("%s\t%s", m[i].name, m[i].det.f.wifename);
    }
    return 0;
}