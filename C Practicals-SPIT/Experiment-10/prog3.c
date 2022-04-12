#include<stdio.h>
#include<string.h>
int replace(char file[])
{
    FILE *fp,*fp1;
    int n,c=0;
    char buffer[100],newline[100];
    printf("Enter line number: ");
    scanf("%d",&n);
    printf("Enter new line: ");
    scanf(" %[^\n]s",newline);

    fp = fopen(file,"r");
    fp1 = fopen("temp.txt","w");
    if (fp == NULL || fp1 == NULL)
    {
        printf("File not found!");
        return 0;
    }

    while(fgets(buffer,100,fp)!=NULL)
    {
        c++;
        if(c==n)
        {
            fputs(newline,fp1);
            fputs("\n",fp1);
        }
        else
            fputs(buffer,fp1);
    }
    fclose(fp);
    fclose(fp1);
    remove(file);
    rename("temp.txt",file);
    printf("Successfully replaced new line with %d !",n);
    return 0;
}
int main()
{
    char file[20];
    printf("Enter the file Name: ");
    scanf("%s",file);
    strcat(file,".txt");
    replace(file);
    return 0;
}