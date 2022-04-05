#include<stdio.h>
#include<string.h>
typedef struct cricket
{
    char player[20];
    char country[20];
    int matches;
    int hundreds;
}cricket;
void input(int n,cricket c[n])
{
    for(int i=0;i<n;i++)
    {
        printf("\nRecord #%d",i+1);
        printf("\nPlayer's Name: ");
        scanf("%s",c[i].player);
        printf("Country Name: ");
        scanf(" %s",c[i].country);
        printf("No. of matches played: ");
        scanf("%d",&c[i].matches);
        printf("No. of hundreds scored: ");
        scanf("%d",&c[i].hundreds);
    }
}
int main()
{
    int i,n;
    printf("How many records do you want to enter: ");
    scanf("%d",&n);
    cricket c[n];
    input(n,c);
    printf("Player\tCountry\tMatches\tHundreds\n");
    for (int i = 0; i < n; i++)
        printf("%s\t%s\t%d\t%d\n", c[i].player, c[i].country, c[i].matches, c[i].hundreds);
    return 0;
}