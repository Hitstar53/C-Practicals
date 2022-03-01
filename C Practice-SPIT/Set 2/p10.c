#include <stdio.h>
int main()
{
    int bin, comp[50], t, r, i,carry=0,c=0;
    printf("Enter the binary number:\n");
    scanf("%d", &bin);
    t = bin;
    for(i=0;t>0;i++)
    {
        r = t % 10;
        comp[i] = (r == 1) ? 0 : 1;
        t = t / 10;
    }
    
    return 0;
}