#include<stdio.h>
int main()
{
  int s=0,r,n,t;
  printf("Enter a 5-digit Number:\n");
  scanf("%d",&n);
  t = n;
  while(n>0)
  {
    r = n % 10;
    s = s + r;
    n = n / 10;
  }
  printf("Sum of digits of %d = %d",t,s);
  return 0;
}