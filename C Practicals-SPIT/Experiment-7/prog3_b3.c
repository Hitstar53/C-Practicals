#include<stdio.h>
#include<string.h>
void replacestr(char str[],char wor[],char rep[])
{
    int stlen,worlen,replen;
    int i,j,k;
    int flag=0,start,end;
    stlen = strlen(str);
    worlen = strlen(wor);
    replen = strlen(rep);
    for (i=0;i<stlen;i++)
    {
        flag=0;
        start=i;
        for (j=0;str[i] == wor[j];j++,i++)
            if (j == worlen-1)
                flag = 1;
        end = i;
        if (flag == 0)
            i -= j;
        else
        {
            for (j=start;j<end;j++)
            {
                for (k=start;k<stlen;k++)
                    str[k] = str[k + 1];
                stlen--;
                i--;
            }
            for (j=start;j<start+replen;j++)
            {
                for (k=stlen;k>=j;k--)
                    str[k+1] = str[k];
                str[j] = rep[j-start];
                stlen++;
                i++;
            }
        }
    }
}

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