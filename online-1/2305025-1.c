#include<stdio.h>
#include<math.h>

int main()
{
    float x1, y1, r, x2, y2;

    printf("Enter center of the circle: ");
    scanf("%f%f", &x1, &y1);

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Enter the coordinate of the point: ");
    scanf("%f%f", &x2, &y2);

    if (((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) > (r*r) )
    {
        printf("Point is outside the circle\n");
    }

    else if (((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) == (r*r) ) 
    {
        printf("Point is on the circle\n");
    }

    else if (((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) < (r*r) ) 
    {
        printf("Point is inside the circle\n");
    }
 
    
    return 0;
}
