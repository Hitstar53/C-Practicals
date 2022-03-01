#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,c;
    printf("Enter co-ordinates of the first point:\n");
    scanf("%d,%d",&x1, &y1);

    printf("Enter co-ordinates of the second point:\n");
    scanf("%d,%d", &x2, &y2);

    printf("Enter co-ordinates of the third point:\n");
    scanf("%d,%d", &x3, &y3);

    c = x1*(y2-y3) - x2*(y1-y3) + x3*(y1-y2);
    if(c==0)
    printf("The 3 points are in a straight line");
    else
    printf("The 3 points are not in a straight line");

    return 0;
}