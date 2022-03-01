#include<stdio.h>
int main()
{
  float f,c;
  printf("Enter temprature in fahrenheit:\n");
  scanf("%f",&f);

  c = 5*(f-32)/9;

  printf("Temprature in degree Celcius = %.2f C",c);
  return 0;
}