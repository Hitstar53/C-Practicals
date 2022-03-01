#include<stdio.h>
int main()
{
  float bs,hra,gs,da;

  printf("Enter Ramesh's Basic Salary:\n");
  scanf("%f",&bs);

  da = 0.4*bs;
  hra = 0.2*bs;

  gs = hra + da + bs;

  printf("Ramesh's Gross Salary = Rs %.2f",gs);
  return 0;
}