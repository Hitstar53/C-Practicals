#include<stdio.h>
#include<string.h>
void replacestr(char str[],char wor[],char rep[])
{
    char str1[100],str2[200];
    char* match;
    int i;
    int wordlen = strlen(wor);
    int len = strlen(str);
    strcpy(str1,str);
    for(i=0;i<len;i++)
    {
        match = strstr(str, wor);
        match = match + wordlen;
        strcpy(str2,match);
        match = match - wordlen;
        if(match)
        {
            strcpy(match,rep);
        }
        strcat(str,str2);
        printf("%s", str);
    }
}
int main()
{
    char str[100], wor[100], rep[100];
    printf("Enter the sentance:\n");
    scanf("%[^\n]s", str);
    printf("Enter the word to be replaced:\n");
    scanf(" %[^\n]s", wor);
    printf("Enter the replacement word:\n");
    scanf(" %[^\n]s", rep);
    replacestr(str, wor, rep);
    return 0;
}