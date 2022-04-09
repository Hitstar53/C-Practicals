#include<stdio.h>
#include<string.h>
typedef struct book
{
    char type;
    char name[50];
    char author[50];
}book;
int sort(char file[])
{
    FILE *fp,*fp1,*fp2;
    fp = fopen(file,"r");
    if(fp==NULL)
    {
        printf("File not found!\nMake sure you entered the correct file name.");
        return 0;
    }
    book b;
    fp1 = fopen("Paperbacks.txt","w");
    fp2 = fopen("Handbacks.txt","w");
    while(fscanf(fp," %c,%[^,],%[^\n]\n",&b.type,b.name,b.author)!=EOF)
    {
        if(b.type=='b')
        {
            fprintf(fp1,"%s, %s\n",b.name,b.author);
            fprintf(fp2,"%s, %s\n",b.name,b.author);
        }
        else if(b.type=='p')
            fprintf(fp1,"%s, %s\n",b.name,b.author);
        else if(b.type=='h')
            fprintf(fp2,"%s, %s\n",b.name,b.author);
    }
    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    printf("Files have been sorted successfully!");
    return 0;
}
int main()
{
    int i;
    char file[20];
    printf("Enter name of file to be sorted: ");
    scanf("%s",file);
    strcat(file,".txt");
    sort(file);
    return 0;
}