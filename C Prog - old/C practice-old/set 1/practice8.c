#include<stdio.h>
int main()
{
  int r,rev=0,n,t;
  printf("Enter a 5-digit Number:\n");
  scanf("%d",&n);
  t = n;
  while(n>0)
  {
    r = n % 10;
    rev = rev*10 + r;
    n = n / 10;
  }
  printf("The reverse number of %d = %d",t,rev);
  return 0;
}