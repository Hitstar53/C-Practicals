#include<stdio.h>
int main()
{
  float km,m,cm,ft,in;

  printf("Enter distance between 2 cities in km:\n");
  scanf("%f",&km);

  m = km*1000;
  cm = m*100;
  ft = km * 3280.8;
  in = km*39370.1;

  printf("Distance between 2 cities in:\nmeters = %.2f m\nCentimeters = %.2f cm\nfeet = %.2f ft\ninch = %.2f in",m,cm,ft,in);
  return 0;
}