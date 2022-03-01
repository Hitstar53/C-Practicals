#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter co-ordinates of the point:\n");
    scanf("%d,%d",&x, &y);

    if(x==0 && y==0)
    printf("The point (%d,%d) lies on the origin",x,y);
    else if(x==0)
    printf("The point (%d,%d) lies on the Y-Axis", x, y);
    else if(y==0)
    printf("The point (%d,%d) lies on the X-Axis", x, y);
    else
    printf("The point (%d,%d) does not lie on any axes or the origin", x, y);
    return 0;
}