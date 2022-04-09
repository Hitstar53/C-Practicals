#include<stdio.h>
#include<string.h>
typedef struct vehicle
{
    char num[8];
    char name[20];
    char address[20];
}vehicle;
int retrieve(char file[], char reg[])
{
    int flag=0;
    FILE *fp;
    fp = fopen(file,"r");
    if(fp==NULL)
    {
        printf("File not found!\nMake sure you entered the correct file name.\n");
        return 0;
    }
    vehicle v;
    while(fscanf(fp," %[^,],%[^,],%[^\n]\n",v.num,v.name,v.address)!=EOF)
    {
        if(strcmp(v.num,reg)==0)
        {
            printf("Name: %s\nAddress: %s\n",v.name,v.address);
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Record Not Found!\n");
    fclose(fp);
}
int main()
{
    char file[20],reg[8];
    int flag=1;
    printf("Enter name of file to be searched: ");
    scanf("%s",file);
    strcat(file, ".txt");
    while(1)
    {
        printf("Enter the registration number: ");
        scanf(" %s",reg);
        retrieve(file,reg);
        printf("Do you want to search another record?(yes=1/no=0): ");
        scanf("%d",&flag);
        if(flag==0)
            break;
    }
    return 0;
}