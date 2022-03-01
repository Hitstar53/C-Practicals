#include<math.h>
#include<stdio.h>
int main()
{
    int h,k,r,x1,y1,d;
    printf("Enter co-ordinates of centre & radius of the circle:\n");
    scanf("%d,%d %d",&h, &k, &r);
    printf("Enter co-ordinates of the point:\n");
    scanf("%d,%d", &x1, &y1);

    d = sqrt(pow(x1-h, 2) + pow(y1-k, 2));

    if(d > r)
    printf("The point (%d,%d) lies outside the circle",x1,y1);
    else if (d == r)
    printf("The point (%d,%d) lies on the circle",x1,y1);
    else if (d < r)
    printf("The point (%d,%d) lies inside the circle",x1,y1);
    return 0;
}