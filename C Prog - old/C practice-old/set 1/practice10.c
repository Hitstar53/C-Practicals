#include<stdio.h>
int main()
{
  int m,tl,lm,lw,im,iw,tm,p;
  p = 80000;
  m = p*0.52;
  tl = 0.48*p;
  lm = 0.35*tl;
  im = m - lm;
  lw = tl - lm;
  iw = p - m -lw;
  printf("Total number of illiterate men = %d\nTotal number of illiterate women = %d",im,iw);
  return 0;
}