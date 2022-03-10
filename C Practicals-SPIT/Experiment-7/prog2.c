#include<stdio.h>
void copystr(char strc1[],char strc2[])
{
    int i=0;
    while(strc1[i]!='\0')
    {
        strc2[i]=strc1[i];
        i++;
    }
    strc2[i]='\0';
}
int length(char str[])
{
    int i;
    for (i=0;str[i]!='\0';i++);
    return i;
}
void compare(char str1[],char str2[],char strg[])
{
    int c=0;
    for(int i=0;(str1[i]!='\0' || str2[i]!='\0');i++)
    {
        if(str1[i]<str2[i])
        {
            copystr(str2,strg);
            c=1;
            break;
        }
        else if(str1[i]>str2[i])
        {
            copystr(str1,strg);
            c=1;
            break;
        }
        if(c==0)
            copystr(str1,strg);
    }
}
void reverse(char str[],char strr[])
{
    int i;
    int len = length(str);
    for(i=0;i<len;i++)
    {
        strr[i]=str[len-i-1];
    }
    strr[i]='\0';
}
void concat(char str1[],char str2[] ,char strn[])
{
    int i=0,j=0;
    while(str1[i]!='\0')
    {
        strn[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0')
    {
        strn[i]=str2[j];
        i++;
        j++;
    }
    strn[i]='\0';
}
void upper(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
    }
}
int main()
{
    char str1[100],str2[100];
    char str3[100],str4[100],str5[100],str6[100];
    int option;
    printf("Enter string 1: ");
    scanf("%[^\n]s",str1);
    printf("Enter string 2: ");
    scanf(" %[^\n]s",str2);
    do
    {
        printf("WELCOME!\n");
        printf("1. Copy String\n");
        printf("2. Length of String\n");
        printf("3. Compare Strings\n");
        printf("4. Reverse Strings\n");
        printf("5. Concatenate Strings\n");
        printf("6. Lower to Upper\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
            {
                copystr(str1,str3);
                printf("Copied String 1: %s\n",str3);
                copystr(str2,str4);
                printf("Copied String 2: %s\n",str4);
                break;
            }
            case 2:
            {
                printf("Length of String 1: %d\n",length(str1));
                printf("Length of String 2: %d\n",length(str2));
                break;
            }
            case 3:
            {
                compare(str1,str2,str5);
                printf("The greater string is: %s\n",str5);
                break;
            }
            case 4:
            {
                reverse(str1,str3);
                reverse(str2,str4);
                printf("Reversed String 1: %s\n",str3);
                printf("Reversed String 2: %s\n",str4);
                break;
            }
            case 5:
            {
                concat(str1,str2,str6);
                printf("Concatenated String: %s\n",str6);
                break;
            }
            case 6:
            {
                upper(str1);
                upper(str2);
                printf("Uppercase String 1: %s\n",str1);
                printf("Uppercase String 2: %s\n",str2);
                break;
            }
            case 7:
            {
                printf("Thank you!\n");
                break;
            }
            default:
            {
                printf("Invalid Choice Try again!");
                break;
            }
        }
    }while(option!=7);
    return 0;
}