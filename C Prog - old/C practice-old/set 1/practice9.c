#include<stdio.h>
int main()
{
  int d=1,s=0,n,f,l,t;
  printf("Enter a 4-digit Number:\n");
  scanf("%d",&n);
  t = n;
  while(n>0)
  {
    n = n / 10;
    d = d*10;
  }
  d = d / 10;
  f = t / d;
  l = t % 10;
  s = f + l;
  printf("The sum of first & last digits of %d = %d",t,s);
  return 0;
}