#include<stdio.h>
int main()
{
  int amt,d1,d2,d3,r;

  printf("Enter amount to be withdrawn in hundreds:\n");
  scanf("%d",&amt);

  d1 = amt / 100;
  d2 = (amt % 100) / 50;
  d3 = ((amt % 100) % 50) / 10;
  r = amt - (d1*100+d2*50+d3*10);

  printf("Notes of Rs 100: %d\nNotes of Rs 50: %d\nNotes of Rs 10: %d\nAmount Remaining: Rs %d",d1,d2,d3,r);

  return 0;
}