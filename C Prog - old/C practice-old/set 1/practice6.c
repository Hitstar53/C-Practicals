#include<stdio.h>
int main()
{
  int c,d;
  printf("Enter 2 numbers:\n");
  scanf("%d %d",&c ,&d);
  printf("Numbers before interchange:\nC = %d\nD = %d\n", c,d);
  c = c + d;
  d = c - d;
  c = c - d;
  printf("Numbers after interchange:\nC = %d\nD = %d", c,d);
  return 0;
}