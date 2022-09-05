#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Enter x-y coordinates of a point in the Cartesian plane> ");
    scanf("%i %i", &x, &y);
    while (!(x == 0 && y == 0))
    {
        if (x == 0 && y > 0)
        {
            printf("(%i, %i) is on the X-axis\n", x, y);
        } 
        if (x > 0 && y == 0)
        {
            printf("(%i, %i) is on the Y-axis\n", x, y);
        } 
        else if (x > 0 && y > 0)
        {
            printf("(%i, %i) is in Quadrant I\n", x, y);
        }
        else if (x < 0 && y > 0)
        {
            printf("(%i, %i) is in Quadrant II\n", x, y);
        }
        else if (x < 0 && y < 0)
        {
            printf("(%i, %i) is in Quadrant III\n", x, y);
        }
        else if (x > 0 && y < 0)
        {
            printf("(%i, %i) is in Quadrant IV\n", x, y);
        }
        printf("Enter x-y coordinates of a point in the Cartesian plane> ");
        scanf("%i %i", &x, &y);
    }
    if (x == 0 && y == 0)
    {
        printf("(%i, %i) is at the origin\n", x, y);
    }
    return 0;
}
