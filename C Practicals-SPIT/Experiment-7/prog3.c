#include<stdio.h>
#include<string.h>
void replacestr(char str[],char wor[],char rep[])
{
    int len=strlen(str);
    int len1=strlen(wor);
    int len2=strlen(rep);
    int i,j=0,k,flag=0;
    char str1[100],str2[100];
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==wor[j])
        {
            k=i;
            for(j=0;wor[j]!='\0';j++)
            {
                if(str[i]==wor[j])
                    i++;
                else
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                j=0;
                for(k;rep[j]!='\0';k++)
                {
                    str[k]=rep[j];
                    j++;
                }
            }
        }
    }
    printf("%s\n", str);
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