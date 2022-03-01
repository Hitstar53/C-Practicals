#include <stdio.h>
int main()
{
  int dec, rem, i = 0;
  char hex[100];

  printf("Enter any decimal Number:\n");
  scanf("%d", &dec);

  for (i = 0; dec > 0; i++)
  {
    rem = dec % 16;
    dec = dec / 16;

    if (rem < 10)
      hex[i] = rem + 48;
    else
      hex[i] = rem + 55;
  }

  printf("Hexadecimal Equivalent: ");
  for (i = i - 1; i >= 0; i--)
  {
    printf("%c", hex[i]);
  }
  return 0;
}