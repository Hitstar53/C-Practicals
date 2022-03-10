#include<stdio.h>
int vowel(char l)
{
    if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U')
        return 1;
    else
        return 0;
}
int consonant(char l)
{
    if (vowel(l)==0 && ((l>=65 && l<=90) || (l>=97 && l<=122)))
        return 1;
    else
        return 0;
}
int words(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            count++;
    }
    return count+1;
}
int main()
{
    int vc=0,cc=0,i;
    char str[100];
    printf("Enter the string\n");
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(vowel(str[i])==1)
            vc++;
        else if(consonant(str[i])==1)
            cc++;
    }
    printf("Number of vowels: %d\nNumber of consonants: %d\nNumber of Characters: %d\nNumber of words: %d\nLength of String: %d",vc,cc,vc+cc,words(str),i);
    return 0;
}
