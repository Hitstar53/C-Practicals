#include<stdio.h>
int main()
{
    int ram,shyam,ajay;

    printf("Enter Ram's Age:\n");
    scanf("%d",&ram);
    printf("Enter Shyam's Age:\n");
    scanf("%d", &shyam);
    printf("Enter Ajay's Age:\n");
    scanf("%d", &ajay);

    if(ram<shyam && ram<ajay)
    printf("Ram is the youngest!");
    else if(shyam<ajay)
    printf("Shyam is the youngest!");
    else
    printf("Ajay is the youngest!");
    
    return 0;
}