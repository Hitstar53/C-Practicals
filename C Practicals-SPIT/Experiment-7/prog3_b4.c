#include <stdio.h>
int palindrome(char str[100])
{
    int i, count = 0;
    for (i = 0; str[i] != 0; i++)
        ;
    for (int j = 0; j < i; j++)
    {
        if (str[j] != str[i - j - 1])
            count = 1;
    }
    if (count == 1)
        return 0;
    else
        return 1;
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    char mat[100][100];
    int i=0,j=0,k=0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            mat[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            mat[k][j] = str[i];
            j++;
        }
    }
    mat[k][j] = '\0';
    for (i = 0; i <= k; i++)
        if (palindrome(mat[i]) == 1)
            printf("%s ", mat[i]);
    return 0;
}