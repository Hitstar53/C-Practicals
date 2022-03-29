#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],wor[100],rep[100];
    printf("Enter the sentance:\n");
    scanf("%[^\n]s",str);
    printf("Enter the word to be replaced:\n");
    scanf(" %[^\n]s",wor);
    printf("Enter the replacement word:\n");
    scanf(" %[^\n]s",rep);
    replacestr(str,wor,rep);
    printf("%s\n",str);
    return 0;
}