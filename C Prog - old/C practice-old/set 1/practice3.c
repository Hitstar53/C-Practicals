#include<stdio.h>
int main()
{
  int sub1,sub2,sub3,sub4,sub5,s;
  float p;

  printf("Enter marks obtained by the student:\n");
  scanf("%d %d %d %d %d", &sub1,&sub2,&sub3,&sub4,&sub5);

  s = sub1+sub2+sub3+sub4+sub5;
  p = s/5;

  printf("Aggregate Marks = %d\nTotal Percentage obtained = %.2f %%",s,p);
  return 0;
}