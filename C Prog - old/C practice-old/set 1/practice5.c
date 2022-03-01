#include<stdio.h>
int main()
{
  float l,b,r;
  float ar,pr,ac,c;
  const float pi = 3.142;

  printf("Enter Length & Breadth of the rectangle:\n");
  scanf("%f %f",&l,&b);

  printf("Enter Radius of the circle:\n");
  scanf("%f",&r);

  pr = 2*(l+b);
  ar = l*b;
  
  ac = pi*r*r;
  c = 2*pi*r;

  printf("Perimeter of Rectangle = %.2f\nArea of Rectangle = %.2f\nCircumference of Circle = %.3f\nArea of Circle = %.3f",pr,ar,ac,c);
  return 0;
}