#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);

    if (num !=0)
    {
      if (num%2 == 0)
      printf("%d is an even number!",num);
      else
      printf("%d is an odd number!", num);
    }
    else
    printf("%d is neither even nor odd!", num);
    return 0;
}