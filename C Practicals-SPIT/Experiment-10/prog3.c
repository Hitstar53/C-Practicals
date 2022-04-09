#include<stdio.h>
#include<string.h>
int replace(char file[])
{
    FILE *fp;
    int n;
    char line[100];
    fp = fopen(file, "a+");
    if (fp == NULL)
    {
        printf("File not found!");
        return 0;
    }
    printf("Enter line number: ");
    scanf("%d",&n);
    printf("Enter new line: ");
    scanf(" %[^\n]s",line);

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