#include<stdio.h>
int main()
{
  int sp,p,n;
  float cpi,cp;
  
  printf("Enter no. of items:\n");
  scanf("%d",&n);
  printf("Enter selling Price:\n");
  scanf("%d",&sp);
  printf("Enter Profit:\n");
  scanf("%d",&p);

  cp = sp - p;
  cpi = cp / n;

  printf("Cost Price of each item = Rs %.2f",cpi);
  return 0;
}