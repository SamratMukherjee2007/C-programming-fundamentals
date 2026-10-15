#include <stdio.h>
int main() {
    int x,y;
    printf("enter point (x,y) :");
    scanf("%d%d", &x,&y);
    if (x == 0 && y == 0)
    {
        printf("point is in origin");
    }
    else if (x == 0 && y != 0)
    {
        printf("point is on y axis");
    }
    else if (x != 0 && y == 0)
    {
        printf("point is on x axis");
    }
    else if (x > 0 && y > 0)
    {
        printf("point is in 1st quadrant");
    }
     else if (x < 0 && y > 0)
    {
        printf("point is in 2nd quadrant");
    }
     else if (x < 0 && y < 0)
    {
        printf("point is in 3rd quadrant");
    }
    else if (x > 0 && y < 0)
    {
        printf("point is in 4th quadrant");
    }
    else{
        printf("unexpected error");
    }
    return 0;
}