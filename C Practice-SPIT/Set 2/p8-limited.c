#include<stdio.h>
void double_digit(int,int,char**,char**,char**);
void triple_digit(int, int, char **, char **, char **,char**);
void quad_digit(int, int, char **, char **, char **, char **);
void penta_digit(int, int, char **, char **, char **, char **);
int main()
{
    int len=0,n,i,t,r;
    char* wor[10];
    char* single[ ] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    char* doub[ ] = { "", "", "", "", "", "", "", "", "", "", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    char* ten[ ] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
    char* place[ ] = {"hundred","thousand"};
    
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("Number in words: ");
    t = n;
    for(i = 0; t > 0; i++)
    {
        t = t/10;
        len++;
    }
    if(len==1)
        printf("%s",single[n]);
    else if(len==2)
        double_digit(n,len,single,doub,ten);
    else if(len==3)
        triple_digit(n,len,single,doub,ten,place);
    else if(len==4)
        quad_digit(n,len,single,doub,ten,place);
    else if(len==5)
        penta_digit(n,len,single,doub,ten,place);
    return 0;
}

void double_digit(int n,int len,char* single[],char* doub[],char* ten[])
{
    int r;
    r = n - (n/10)*10;
    if (len == 2 && n < 10)
        printf("%s", single[n%10]);
    else if (len == 2 && n < 20)
        printf("%s", doub[n]);
    else if (len == 2 && n >= 20 && r!=0)
        printf("%s %s", ten[n / 10], single[n % 10]);
    else if (len == 2 && n >= 20 && r==0)
        printf("%s", ten[n / 10]);
    return;
}
void triple_digit(int n, int len, char *single[], char *doub[], char *ten[],char* place[])
{
    int r;
    r = n - (n/100)*100;
    printf("%s %s ", single[n / 100], place[0]);
    if (r != 0)
        double_digit(r, len - 1, single, doub, ten);
    return;
}
void quad_digit(int n, int len, char *single[], char *doub[], char *ten[],char* place[])
{
    int r;
    r = n - (n/1000)*1000;
    printf("%s %s ", single[n / 1000], place[1]);
    if(r>100)
        triple_digit(r, len - 1, single, doub, ten, place);
    else if(r<100)
        double_digit(r, len - 2, single, doub, ten);
    return;
}
void penta_digit(int n, int len, char *single[], char *doub[], char *ten[],char* place[])
{
    int r;
    r = n - (n/1000)*1000;
    double_digit(n/1000, len-3, single, doub, ten);
    printf(" %s ", place[1]);
    if(r!=0)
        triple_digit(r, len - 2, single, doub, ten, place);
    return;
}